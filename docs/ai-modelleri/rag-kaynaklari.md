/srv/rag-learning Güncel Kaynak Listesi
1. 01_protocols (Haberleşme ve Veri Yolları)
Alex Forencich'in endüstri standardı olan saf Verilog/SystemVerilog protokol kütüphaneleri:

verilog-axi: AXI4, AXI4-Lite arayüzleri, switch'ler ve crossbar yapıları.

verilog-axis: AXI-Stream akış kontrolü ve veri paketleme modülleri.

verilog-ethernet: Gigabit Ethernet MAC, IP ve UDP katman bileşenleri.

verilog-pcie: PCI Express arayüzleri, DMA motorları ve SR-IOV yapıları.

verilog-uart: Temiz ve parametrik UART alıcı-verici modülleri.

verilog-i2c: I2C master/slave denetleyicileri.

verilog-wishbone: Wishbone bus arayüzü ve köprüleme elemanları.

verilog-lfsr: Kriptografi ve test süreçleri için doğrusal geri beslemeli kaydırmalı kaydediciler.

2. 02_standard_libs (Temel Tasarım Yapı Taşları)
Modelin tekerleği yeniden icat etmesini önleyen, kararlı ve silisyumda doğrulanmış hazır kütüphaneler:

basejump_stl: Donanım dünyasının "C++ STL" kütüphanesi; parametrik FIFO'lar, saat bölgeleri arası geçiş (CDC) senkronizörleri ve matematik blokları.

surf: SLAC Laboratuvarı'nın gelişmiş bellek yönetimleri ve dijital tasarım kalıpları.

3. 03_verification (İşlemci Mimarileri ve AI Doğrulama)
Modelin donanım özelinde mantık yürütmesini ve test süreçlerini optimize eden yapılar:

verilog-eval: Cornell Üniversitesi'nin LLM'ler için özel hazırladığı yüzlerce fonksiyonel Verilog problemi ve endüstri standardı çözümleri.

serv: Dünyanın en küçük seri RISC-V işlemci çekirdeği (Temiz saf Verilog mimari referansı).

VeeRwolf: SERV ve VeeR çekirdeklerini çevre birimleriyle bağlayan eksiksiz SoC tasarım şablonu.

sv2v: SystemVerilog kodlarının sentezlenebilir saf Verilog sözdizimine dönüştürülme kuralları ve kısıtlamaları.

4. 04_eda_automation (EDA Otomasyonu ve Self-Healing)
Terminalden gelen sentez/simülasyon hatalarını modelin düzeltmesini ve akışı yönetmesini sağlayan araçlar:

OpenLane: Fiziksel tasarım (RTL-to-GDSII) akışı, floorplan kısıtlamaları ve örnek config.json şablonları.

yosys: Sentezleyicinin hangi Verilog yapılarını desteklediğine dair kurallar ve sentez sınırları dökümanları.

verilator: Katı kod kontrolü (Linting) sırasında terminale düşen tüm hata kodlarının kılavuzu ve çözüm açıklamaları.

fusesoc: Donanım dünyasının paket ve bağımlılık yönetim sistemi.

edalize: Yosys, OpenROAD ve Verilator gibi EDA araçlarını Python scriptleri ile tetikleme ve yönetme arayüzü kütüphanesi.

fusesoc-cores: Hazır açık kaynaklı IP tanımlamaları ve otomasyon manifestoları.