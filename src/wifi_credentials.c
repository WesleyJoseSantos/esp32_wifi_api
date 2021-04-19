/**
 * @file wifi_credentials.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "wifi_credentials.h"
#include "stdio.h"
#include "cJSON.h"

void wifi_credentials_to_json(wifi_credentials_t *origin, char *destiny){
    cJSON *wifi_data = cJSON_CreateObject();
    cJSON_AddStringToObject(wifi_data, "ssid", origin->ssid);
    cJSON_AddStringToObject(wifi_data, "pass", origin->pass);
    sprintf(destiny, cJSON_Print(wifi_data));
}

int wifi_credentials_from_json(char *origin, wifi_credentials_t *destiny){
    cJSON *json = cJSON_Parse(origin);
    cJSON *ssid = cJSON_GetObjectItem(json, "ssid");
    cJSON *pass = cJSON_GetObjectItem(json, "pass");
    if(ssid) destiny->ssid = ssid->valuestring;
    if(pass) destiny->pass = pass->valuestring;
    if(ssid == NULL || pass == NULL) return -1;
    else return 0;
}