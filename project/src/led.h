#ifndef led_included
#define  led_included

void led_init(char LED);
void led_close(char LED);
void led_on(char LED);
void led_off(char LED);
void led_toggle(char LED);
char led_status(char LED);

#endif