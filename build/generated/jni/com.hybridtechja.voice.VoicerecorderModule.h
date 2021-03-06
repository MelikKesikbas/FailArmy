/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

		namespace com {
		namespace hybridtechja {
		namespace voice {


class VoicerecorderModule : public titanium::Proxy
{
public:
	explicit VoicerecorderModule(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> start(const v8::Arguments&);
	static v8::Handle<v8::Value> sanitizePath(const v8::Arguments&);
	static v8::Handle<v8::Value> startRecording(const v8::Arguments&);
	static v8::Handle<v8::Value> stopRecording(const v8::Arguments&);
	static v8::Handle<v8::Value> getRecording(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static v8::Handle<v8::Value> getter_recording(v8::Local<v8::String> property, const v8::AccessorInfo& info);

};

		} // voice
		} // hybridtechja
		} // com
