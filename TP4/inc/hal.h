
#ifndef MAIN_H
#define MAIN_H

/** @file hal.h
 ** @brief Declaración de las primitivas de HAL
 **/

/* === Headers files inclusions ================================================================ */

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

void hal_gpio_set_direction(uint8_t port, uint8_t bit, bool output);

void hal_gpio_set_output(uint8_t port, uint8_t bit, bool active);

bool hal_gpio_get_input(uint8_t port, uint8_t bit);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* MAIN_H */
