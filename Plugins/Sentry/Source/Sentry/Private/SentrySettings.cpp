#include "SentrySettings.h"
#include "SentryBeforeSendHandler.h"
#include "SentryTraceSampler.h"

USentrySettings::USentrySettings() {
    this->InitAutomatically = true;
    this->Dsn = TEXT("https://2a6ab30e9904066d81f1ed0ffa6311af@o1118561.ingest.us.sentry.io/4506937591267328");
    this->Debug = true;
    this->EnableAutoCrashCapturing = true;
    this->Environment = TEXT("Release");
    this->SampleRate = 1.00f;
    this->EnableAutoLogAttachment = true;
    this->AttachStacktrace = true;
    this->SendDefaultPii = false;
    this->AttachScreenshot = false;
    this->MaxBreadcrumbs = 100;
    this->EnableAutoSessionTracking = true;
    this->SessionTimeout = 30000;
    this->OverrideReleaseName = false;
    this->UseProxy = false;
    this->BeforeSendHandler = USentryBeforeSendHandler::StaticClass();
    this->EnableTracing = false;
    this->SamplingType = ESentryTracesSamplingType::UniformSampleRate;
    this->TracesSampleRate = 0.00f;
    this->TracesSampler = USentryTraceSampler::StaticClass();
    this->EnableForPromotedBuildsOnly = false;
    this->UploadSymbolsAutomatically = true;
    this->IncludeSources = false;
}


