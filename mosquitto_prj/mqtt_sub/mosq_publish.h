/********************************************************************************
 *      Copyright:  (C) 2019 none
 *                  All rights reserved.
 *
 *       Filename:  mosq_publish.h
 *    Description:  This head file 
 *
 *        Version:  1.0.0(2019年07月23日)
 *         Author:  zhanghang <1711318490@qq.com>
 *      ChangeLog:  1, Release initial version on "2019年07月23日 15时29分42秒"
 *                 
 ********************************************************************************/

#ifndef __MOSQ_PUBLISH_H_
#define __MOSQ_PUBLISH_H_

#include <mosquitto.h>
#include <unistd.h>
#include "get_mac_address.h"
#include "crc-itu-t.h"
#include "packet.h"
#include "analysis.h"
#include <string.h>
#include "login.h"
#include "create_json_data.h"
#include <errno.h>
int mosq_publish(struct mosquitto *mosq,struct login_t *login);
#endif
