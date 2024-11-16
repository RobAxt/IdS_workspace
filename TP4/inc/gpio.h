
#ifndef GPIO_H
#define GPIO_H

/** @file gpio.h
 ** @brief Declaración del objetio gpio
 **/

/* === Headers files inclusions ================================================================ */

#include <stdint.h>
#include <stdbool.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

typedef struct gpio_s * gpio_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Función para crear una gpio
 *
 * @param port Número de puerto gpio correspondiente
 * @param bit  Número de bit asignado al puerto
 * @return gpio_t Puntero al objeto creado
 */
gpio_t gpioCreate(uint8_t port, uint8_t bit);

/**
 * @brief Define un gpio como entrada o salida
 *
 * @param self gpio a configurar
 * @param inOut configura al gpio como salida si inOut es true y como entrada si inOut es false
 */
void void gpioSetDirection(gpio_t self, bool io)(gpio_t gpio, bool inOut);

/**
 * @brief Configura la gpio si esta configurada como salida, setea la salida en caso de state true y
 * resetea la salida en caso de state false
 *
 * @param self gpio a configurar
 * @param state estado del gpio a configurar
 */
void gpioSetState(gpio_t gpio, bool state);

/**
 * @brief Función para consultar el estado de la gpio
 *
 * @param gpio a configurar
 * @return true gpio está seteado
 * @return false gpio está reseteado
 */
bool gpioGetState(gpio_t gpio);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H */
