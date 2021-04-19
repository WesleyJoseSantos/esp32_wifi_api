/**
 * @file wifi_credentials.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __WIFI_CREDENTIALS__H__
#define __WIFI_CREDENTIALS__H__

typedef struct wifi_credentials_t{
    char *ssid;
    char *pass;
}wifi_credentials_t;

void wifi_credentials_to_json(wifi_credentials_t *origin, char *destiny);
int  wifi_credentials_from_json(char *origin, wifi_credentials_t *destiny);

#endif  //!__WIFI_CREDENTIALS__H__