// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/trace_client_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK trace_client_on_trace_data_collected(
    struct _cef_trace_client_t* self, const char* fragment,
    size_t fragment_size) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: fragment; type: simple_byaddr
  DCHECK(fragment);
  if (!fragment)
    return;

  // Execute
  CefTraceClientCppToC::Get(self)->OnTraceDataCollected(
      fragment,
      fragment_size);
}

void CEF_CALLBACK trace_client_on_trace_buffer_percent_full_reply(
    struct _cef_trace_client_t* self, float percent_full) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTraceClientCppToC::Get(self)->OnTraceBufferPercentFullReply(
      percent_full);
}

void CEF_CALLBACK trace_client_on_end_tracing_complete(
    struct _cef_trace_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTraceClientCppToC::Get(self)->OnEndTracingComplete();
}


// CONSTRUCTOR - Do not edit by hand.

CefTraceClientCppToC::CefTraceClientCppToC(CefTraceClient* cls)
    : CefCppToC<CefTraceClientCppToC, CefTraceClient, cef_trace_client_t>(cls) {
  struct_.struct_.on_trace_data_collected =
      trace_client_on_trace_data_collected;
  struct_.struct_.on_trace_buffer_percent_full_reply =
      trace_client_on_trace_buffer_percent_full_reply;
  struct_.struct_.on_end_tracing_complete =
      trace_client_on_end_tracing_complete;
}

#ifndef NDEBUG
template<> long CefCppToC<CefTraceClientCppToC, CefTraceClient,
    cef_trace_client_t>::DebugObjCt = 0;
#endif
