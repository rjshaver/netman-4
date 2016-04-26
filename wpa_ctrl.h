#ifndef WPA_CTRL_H
#define WPA_CTRL_H

#include <sys/socket.h>
#include <sys/un.h>

#include "util.h"

struct wpa_network {
	char *name;
	char *id;
	struct keyvalue *options;
};

struct wpa_ctrl {
	struct sockaddr_un local;
	struct sockaddr_un remote;
	int socket;
};

typedef struct wpa_network wpa_network_t;
typedef struct wpa_ctrl wpa_ctrl_t;

void wpa_connect_to_network(wpa_network_t *network);
void wpa_reconnect_to_network();

#endif
