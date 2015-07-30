#pragma once

#include "cj.h"
#include "cjCms.h"

namespace cj {

class SiteManager;

class WebSite {
public:
	SiteManager *manager;
	String host;
	int tplId;
	String login;
	int userId;

	map <string, WebPage*> pages;
	WebSite(SiteManager *manager, string host);
};

}