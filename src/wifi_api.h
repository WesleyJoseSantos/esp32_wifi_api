/**
 * @file wifi_api.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __WIFI_API__H__
#define __WIFI_API__H__

#include "wifi_credentials.h"

typedef struct wifi_info_t{
    char mac[14];
    char ip[16];
    int connected;
}wifi_info_t;

typedef struct wifi_data_t{
    wifi_credentials_t credentials;
    wifi_info_t info;
}wifi_data_t;

void wifi_init();
void wifi_connect(wifi_credentials_t credentials);
void wifi_create_ap(wifi_credentials_t credentials);
int  wifi_is_connected();
void wifi_get_mac(char mac[14]);
void wifi_get_ip(char ip[16]);

#endif  //!__WIFI_API__H__