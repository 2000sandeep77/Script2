Action()
{

	
	lr_start_transaction("TR01_Launch");
	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("banking", 
		"URL=http://localhost/banking", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("r10.o.lencr.org", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x0Bh\\xA9.\\x99\\xC1d\\x83I\\xCEL\\xB5\\xD3R\\x89\\xBB\\xBA", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("r10.o.lencr.org_2", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04v<\\xE7\\x12\\x13\\x0B\\xF0\\xD6\rq\\x0F9A\\x0Fi\\x9A\\x13", 
		LAST);

	web_custom_request("r10.o.lencr.org_3", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xC3\nN\\xE0\\x18\\xCF\\x8BW\\x8E\\x01F\\xB4\\x85~&,D", 
		LAST);

	web_custom_request("r10.o.lencr.org_4", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04Ra$\\xCC\\xD4\\xFF\\xD9\\x10\\xBF ;\\xE3\\xB9\\x11g\\xB0\\x92", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01\\xE0c\\x8B\\x9A\\xDF\\x9CB\\x9B\\x90\\xA4n\\xB9\\x86\\x06\\x06", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xBA\\xAD\\x9A4\\xCC\\x06O\\x8C\\xD0`k\\x99]\\x9C$", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1722394630668\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("r10.o.lencr.org_5", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14i\\x0F\\xE4\\x15g\\xEDo\\x7F\\xB54Dd\\x06\\x06o\tg\\x07qr\\x04\\x14t\\xA4v)\\x17\\x18T\\x8517\\xBEg\\xE6\\x06X\\xC0\\xBC\\xC5\\x05r\\x02\\x12\\x04Ra$\\xCC\\xD4\\xFF\\xD9\\x10\\xBF ;\\xE3\\xB9\\x11g\\xB0\\x92", 
		LAST);

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/128.0.3/20240725162350/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%252010.0.0.0.20348.887%2520(x64)/ISET%3ASSE4_2%2CMEM%3A16196/default/default/update.xml?force=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("57b60a8e-e35a-44b3-a257-19b6f9293a20", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/57b60a8e-e35a-44b3-a257-19b6f9293a20", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":4,\"start_time\":\"2024-07-31T07:02:19.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.060+00:00\",\"reason\":\"startup\",\"experiments\":{\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"recommend-add-ons-staff-pick-part-2\":{"
		"\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\""
		"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"app_display_version\":\"128.0.3\",\"app_build\":\"20240725162350\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"windows_build_number\":20348,\"build_date\":\"1970-01-01T00:00:00+00:00\",\""
		"first_run_date\":\"2024-07-31+00:00\",\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"822571c1-9c9d-4d99-8bbb-5171f4f2a291\"},\"quantity\":{\"urlbar.pref_max_results\":10},\"boolean\":{\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_data_collection\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_topsites\":true}},\"events\":[{\"timestamp\":0,\"category\":\"webcompatreporting\",\"name\":\""
		"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1722409337656\",\"setting\":\"required\"}},{\"timestamp\":1233,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1722409338890\"}}]}", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("54b38b97-8db4-4545-81b9-96b0d777adf8", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/54b38b97-8db4-4545-81b9-96b0d777adf8", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":4,\"start_time\":\"2024-07-31T06:04:30.000+00:00\",\"end_time\":\"2024-07-31T07:07:07.162+00:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"recommend-add-ons-staff-pick-part-2\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"app_display_version\":\"128.0.3\",\"architecture\":\"x86_64\",\"app_build\":\"20240725162350\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"app_channel\":\"release\",\"windows_build_number\":20348,\"client_id\":\""
		"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\",\"first_run_date\":\"2024-07-31+00:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"counter\":{\"use.counter.css.page.css_margin_bottom\":5,\"use.counter.css.page.css_transition\":3,\"use.counter.css.page.css_margin_left\":5,\"use.counter.css.doc.css_animation\":1,\"use.counter.css.doc.css_padding_left\":2,\"use.counter.css.doc.css_background_color\":2,\"use.counter.css.page.css_font_weight\":5,\"use.counter.css.page.css_padding_top\":5,\""
		"use.counter.css.page.css_text_decoration\":5,\"use.counter.css.page.css_word_spacing\":3,\"use.counter.css.page.css_width\":5,\"use.counter.css.doc.css_margin_right\":2,\"use.counter.css.doc.css_cursor\":2,\"use.counter.dedicated_workers_destroyed\":5,\"use.counter.css.doc.css_display\":2,\"use.counter.css.doc.css_text_align\":2,\"use.counter.css.page.css_list_style\":5,\"use.counter.css.doc.css_margin_bottom\":2,\"use.counter.css.doc.css_float\":2,\"use.counter.css.doc.css_border\":2,\""
		"use.counter.css.doc.css_margin\":2,\"use.counter.css.doc.css_padding_right\":2,\"use.counter.css.doc.css_z_index\":1,\"use.counter.css.doc.css_word_spacing\":1,\"use.counter.css.doc.css_padding_top\":2,\"use.counter.css.page.css_background_color\":5,\"use.counter.css.page.css_margin_top\":5,\"use.counter.css.page.css_margin\":5,\"use.counter.css.page.css_overflow_x\":2,\"use.counter.css.page.css_overflow_y\":2,\"use.counter.css.page.css_padding_bottom\":5,\"use.counter.css.page.css_z_index\":1,\""
		"use.counter.css.doc.css_overflow_y\":1,\"use.counter.css.page.css_top\":1,\"use.counter.css.page.css_padding_left\":5,\"use.counter.css.doc.css_line_height\":2,\"use.counter.css.page.css_line_height\":5,\"use.counter.css.doc.css_left\":2,\"use.counter.css.doc.css_width\":2,\"use.counter.css.doc.css_border_collapse\":1,\"use.counter.css.doc.css_letter_spacing\":1,\"use.counter.content_documents_destroyed\":2,\"use.counter.css.page.css_left\":5,\"use.counter.css.page.css_font_family\":5,\""
		"use.counter.css.page.css_padding\":5,\"use.counter.css.page.css_transition_duration\":5,\"use.counter.css.page.css_border_bottom\":2,\"use.counter.css.page.css_box_shadow\":5,\"use.counter.css.doc.css_border_radius\":2,\"use.counter.css.doc.css_margin_top\":2,\"use.counter.css.page.css_border_bottom_left_radius\":1,\"use.counter.css.doc.css_font_family\":2,\"use.counter.css.page.css_border_right\":5,\"use.counter.css.page.css_animation\":1,\"use.counter.css.page.css_border_top_right_radius\":1,\""
		"use.counter.css.page.css_color\":5,\"use.counter.css.page.css_display\":5,\"use.counter.css.page.css_float\":5,\"use.counter.css.page.css_margin_right\":5,\"use.counter.css.page.css_opacity\":1,\"use.counter.css.doc.css_list_style\":2,\"use.counter.css.doc.css_text_decoration\":2,\"use.counter.css.page.css_border_radius\":5,\"use.counter.css.page.css_clear\":5,\"use.counter.css.doc.css_overflow_x\":1,\"use.counter.css.page.css_position\":5,\"use.counter.css.doc.css_margin_left\":2,\""
		"use.counter.top_level_content_documents_destroyed\":5,\"use.counter.css.doc.css_position\":2,\"use.counter.css.doc.css_transition_duration\":2,\"use.counter.css.page.css_letter_spacing\":3,\"use.counter.css.doc.css_padding\":2,\"use.counter.css.page.css_padding_right\":5,\"use.counter.css.page.css_font_size\":5,\"use.counter.css.doc.css_clear\":2,\"use.counter.css.page.css_cursor\":5,\"use.counter.css.page.css_height\":5,\"use.counter.css.doc.css_padding_bottom\":2,\""
		"use.counter.css.page.css_border_collapse\":2,\"use.counter.css.doc.css_font_weight\":2,\"use.counter.css.doc.css_box_shadow\":2,\"use.counter.css.doc.css_overflow\":2,\"use.counter.css.doc.css_border_right\":2,\"use.counter.css.doc.css_font_size\":2,\"use.counter.css.doc.css_transition\":1,\"use.counter.css.doc.css_border_bottom\":1,\"use.counter.css.doc.css_color\":2,\"use.counter.css.page.css_border\":5,\"use.counter.css.page.css_overflow\":5,\"use.counter.css.doc.css_height\":2,\""
		"use.counter.css.page.css_text_align\":5}}}", 
		LAST);

	web_custom_request("117d2adb-368d-42f5-82c6-b03e4a3e7b00", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/pageload/1/117d2adb-368d-42f5-82c6-b03e4a3e7b00", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3,\"start_time\":\"2024-07-31T05:47:11.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.089+00:00\",\"reason\":\"startup\"},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-07-31+00:00\",\"app_display_version\":\"128.0.3\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_build\":\"20240725162350\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"windows_build_number\""
		":20348},\"events\":[{\"timestamp\":0,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"redirect_time\":\"486\",\"load_type\":\"NORMAL\",\"using_webdriver\":\"false\",\"response_time\":\"574\",\"load_time\":\"1153\",\"redirect_count\":\"1\",\"http_ver\":\"1\",\"glean_timestamp\":\"1722409338827\",\"lcp_time\":\"1149\"}},{\"timestamp\":19902,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"glean_timestamp\":\"1722409358729\",\"load_type\":\"LINK\",\"http_ver\":\"1\",\"lcp_time\":\""
		"207\",\"using_webdriver\":\"false\",\"load_time\":\"233\",\"fcp_time\":\"222\",\"response_time\":\"35\",\"dns_lookup_time\":\"3\"}},{\"timestamp\":62820,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_time\":\"189\",\"redirect_time\":\"49\",\"redirect_count\":\"1\",\"response_time\":\"75\",\"glean_timestamp\":\"1722409401649\",\"http_ver\":\"1\",\"load_type\":\"LINK\",\"using_webdriver\":\"false\",\"js_exec_time\":\"0\"}},{\"timestamp\":98899,\"category\":\"perf\",\"name\":\""
		"page_load\",\"extra\":{\"http_ver\":\"1\",\"load_time\":\"123\",\"redirect_time\":\"31\",\"response_time\":\"63\",\"using_webdriver\":\"false\",\"glean_timestamp\":\"1722409437729\",\"redirect_count\":\"1\",\"load_type\":\"LINK\",\"js_exec_time\":\"0\"}},{\"timestamp\":140621,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_type\":\"LINK\",\"using_webdriver\":\"false\",\"glean_timestamp\":\"1722409479451\",\"load_time\":\"2183\",\"response_time\":\"84\",\"dns_lookup_time\":\"0\",\""
		"js_exec_time\":\"2085\",\"http_ver\":\"1\"}}]}", 
		LAST);

	web_custom_request("92b2308d-bc92-43a5-89b9-db6fa3e85f98", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/92b2308d-bc92-43a5-89b9-db6fa3e85f98", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":8,\"start_time\":\"2024-07-31T07:02:19.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.187+00:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-07-31+00:00\",\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\",\"windows_build_number\":20348,\"os_version\":\"10.0\",\"app_channel\":\"release\",\"os\":\"Windows\",\"app_display_version\":\"128.0.3\",\"app_build\""
		":\"20240725162350\",\"architecture\":\"x86_64\",\"locale\":\"en-US\"},\"metrics\":{\"string\":{\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\"},\"boolean\":{\"topsites.sponsored_enabled\":true,\"newtab.weather_enabled\":true,\"topsites.enabled\":true,\"newtab.search.enabled\":true,\"pocket.enabled\":true,\"pocket.is_signed_in\":false,\"pocket.sponsored_stories_enabled\":true},\"quantity\":{\"topsites.rows\":1},\"string_list\":{\""
		"newtab.blocked_sponsors\":[]}}}", 
		LAST);

	web_custom_request("45a5f73d-6199-468b-9670-a82479871e6c", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/45a5f73d-6199-468b-9670-a82479871e6c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":7,\"start_time\":\"2024-07-31T07:02:19.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.273+00:00\",\"reason\":\"active\",\"experiments\":{\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\""
		"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"recommend-add-ons-staff-pick-part-2\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"first_run_date\":\"2024-07-31+00:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_build\":\"20240725162350\",\"app_display_version\":\"128.0.3\",\"locale\":\"en-US\",\"os\":\""
		"Windows\",\"app_channel\":\"release\",\"windows_build_number\":20348,\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\"},\"metrics\":{\"counter\":{\"browser.engagement.active_ticks\":22,\"browser.engagement.uri_count\":5},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1,\"newtab\":1,\"pageload\":1,\"use-counters\":1}},\"uuid\":{\"legacy.telemetry.client_id\":\"822571c1-9c9d-4d99-8bbb-5171f4f2a291\"}}}", 
		LAST);
	
	
	lr_end_transaction("TR01_Launch",LR_AUTO);

	lr_think_time(15);

	lr_start_transaction("TR02_StaffLogin");

	web_url("staff_login.php", 
		"URL=http://localhost/banking/staff_login.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);

	lr_end_transaction("TR02_StaffLogin",LR_AUTO);

	lr_start_transaction("TR03_Login");

	web_submit_data("staff_login.php_2", 
		"Action=http://localhost/banking/staff_login.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/staff_login.php", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=staff_id", "Value={P_Staff_id}", ENDITEM, 
		"Name=password", "Value={P_Staff_password}", ENDITEM, 
		"Name=staff_login-btn", "Value=LOGIN", ENDITEM, 
		EXTRARES, 
		"Url=img/customers/No_image.jpg", "Referer=http://localhost/banking/staff_profile.php", ENDITEM, 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("TR03_Login",LR_AUTO);

	lr_start_transaction("TR04_ApprovePendingAccount");

	web_submit_data("staff_profile.php", 
		"Action=http://localhost/banking/staff_profile.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/staff_profile.php", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=apprvac", "Value=Approve Pending Account", ENDITEM, 
		LAST);

	lr_end_transaction("TR04_ApprovePendingAccount",LR_AUTO);

	lr_think_time(151);

	lr_start_transaction("TR05_ApplicationNumber");

	web_submit_data("pending_customers.php", 
		"Action=http://localhost/banking/pending_customers.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/pending_customers.php", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=application_no", "Value={P_ApplicationNumber}", ENDITEM, 
		"Name=search_application", "Value=Search", ENDITEM, 
		LAST);

	lr_end_transaction("TR05_ApplicationNumber",LR_AUTO);

	lr_think_time(60);

	lr_start_transaction("TR06_Confirm");
	
	 web_reg_save_param("C_AccountNumber",
        "LB=Account no :",
        "RB=\\n",
        LAST);

	web_submit_data("pending_customers.php_2", 
		"Action=http://localhost/banking/pending_customers.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/pending_customers.php", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=approve_cust", "Value=Approve", ENDITEM, 
		LAST);

	lr_end_transaction("TR06_Confirm",LR_AUTO);


	lr_start_transaction("TR09_LogOut");

	web_url("staff_logout.php", 
		"URL=http://localhost/banking/staff_logout.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/pending_customers.php", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TR09_LogOut",LR_AUTO);
	
	lr_output_message(lr_eval_string("{C_AccountNumber}"));
	



    
   

	return 0;
}