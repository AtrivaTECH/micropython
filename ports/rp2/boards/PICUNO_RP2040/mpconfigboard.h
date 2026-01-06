// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME          "PicUNO RP2040"
#define MICROPY_HW_FLASH_STORAGE_BYTES (6 * 1024 * 1024)

// USB VID/PID
#define MICROPY_HW_USB_VID (0x1209)
#define MICROPY_HW_USB_PID (0x2024)

// UART configuration
#define MICROPY_HW_UART0_TX  (0)
#define MICROPY_HW_UART0_RX  (1)
#define MICROPY_HW_UART0_CTS (2)
#define MICROPY_HW_UART0_RTS (3)

// I2C configuration
#define MICROPY_HW_I2C1_SCL  (27)
#define MICROPY_HW_I2C1_SDA  (26)

// SPI configuration
#define MICROPY_HW_SPI0_SCK  (18)
#define MICROPY_HW_SPI0_MOSI (19)
#define MICROPY_HW_SPI0_MISO (16)
