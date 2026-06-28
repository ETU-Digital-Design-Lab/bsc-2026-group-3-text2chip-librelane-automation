En basit haliyle, sunucundaki bu kod havuzunu modele bağlayacak bir RAG sistemi kurmak için sadece 2 şeye ihtiyacımız var:

Verileri Vektörleştirecek Bir Araç (Embedding/Vector Engine): Klasörlerdeki Verilog kodlarını ve dokümanları yapay zekanın anlayacağı matematiksel sayılara (vektörlere) çevirip saklayacak sistem.

Bir Arayüz veya Bağlayıcı Script (Orchestrator): Kullanıcı soru sorduğunda gidip o veri tabanından ilgili kodu bulup Ollama'ya paslayacak yönetim merkezi.

Bunu kurmanın en basit, sıfır kod gerektiren ve en hızlı yolu Docker üzerinden tek bir komutla AnythingLLM kurmaktır. Çünkü AnythingLLM kendi içinde hem vektör veritabanını barındırır, hem gömülü (görsel) döküman yükleme ekranı sunar, hem de doğrudan Ollama ile konuşur.

İşte en basit kurulum adımları:

Adım 1: Sunucuda AnythingLLM Konteynerini Başlat
Terminalde şu komutu çalıştırarak sistemi ayağa kaldır:

Bash
docker run -d -p 3001:3001 \
  --name anythingllm \
  -v anythingllm_storage:/app/storage \
  mintplexlabs/anythingllm
Adım 2: Tarayıcıdan Arayüze Bağlan ve Ollama'yı Seç
Tarayıcından http://sunucu_ip_adresiniz:3001 adresine git.

İlk kurulum sihirbazında LLM Provider olarak Ollama'yı seç.

Ollama URL kısmına sunucunun IPsini (veya yereldeyse [http://host.docker.internal:11434](http://host.docker.internal:11434)) gir.

Model listesinden az önce oluşturduğumuz librelane-qwen3 modelini seç.

Embedding Preference (Vektörleştirici) kısmında AnythingLLM'in kendi içindeki ücretsiz yerel işlemcisini (Built-in / LanceDB) seç geç. En basiti budur.

Adım 3: Klasörleri RAG'e Yükle
Arayüzde yeni bir Workspace (Çalışma Alanı) oluştur (Örn: LibreLane-KB).

Workspace ayarlarına girip "Upload Documents" (Doküman Yükle) butonuna bas.

Sunucundaki /srv/rag-learning/ altındaki klasörleri (01_protocols, 02_standard_libs vb.) buraya sürükle bırak veya sunucu içi dosya okuma izni verdiysen o dizini göster.

"Save and Embed" butonuna bas.

Sistem birkaç dakika içinde tüm o Alex Forencich repolarını, OpenLane dökümanlarını ve işlemci mimarilerini satır satır okuyup indeksleyecektir.

İşlem bittiğinde artık sohbet ekranından "Bana basejump kütüphanesini örnek alarak bir FIFO yaz" dediğinde, sistem arkada otomatik olarak o klasördeki kodu bulup modelin önüne referans olarak koyacaktır.