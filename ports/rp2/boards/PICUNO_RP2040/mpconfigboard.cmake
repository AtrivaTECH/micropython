# cmake file for PicUNO RP2040

# Disable networking features (no WiFi on this board)
set(MICROPY_PY_LWIP OFF)
set(MICROPY_PY_NETWORK_CYW43 OFF)
set(MICROPY_PY_BLUETOOTH OFF)

# 8MB Flash
set(PICO_BOARD "pico")
set(PICO_FLASH_SIZE_BYTES 8388608)
