/**
 * Modified MIT License
 * 
 * Copyright 2021 OneSignal
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * 1. The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * 2. All copies of substantial portions of the Software may only be used in connection
 * with services provided by OneSignal.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>

#import <OneSignalFramework/OneSignalFramework.h>

@interface OneSignalPush : CDVPlugin <OSPermissionObserver, OSSubscriptionObserver, OSEmailSubscriptionObserver, OSSMSSubscriptionObserver, OSInAppMessageLifecycleHandler>

- (void)setProvidesNotificationSettingsView:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setNotificationWillShowInForegroundHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setNotificationOpenedHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)completeNotification:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)init:(CDVInvokedUrlCommand* _Nonnull)command;

- (void)getDeviceState:(CDVInvokedUrlCommand* _Nonnull)command;

- (void)addPermissionObserver:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)addSubscriptionObserver:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)addEmailSubscriptionObserver:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)addSMSSubscriptionObserver:(CDVInvokedUrlCommand* _Nonnull)command;

- (void)setLogLevel:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setAlertLevel:(CDVInvokedUrlCommand* _Nonnull)command;

- (void)addTags:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)removeTags:(CDVInvokedUrlCommand* _Nonnull)command;

- (void)promptForPushNotificationsWithUserResponse:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)registerForProvisionalAuthorization:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)disablePush:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)postNotification:(CDVInvokedUrlCommand* _Nonnull)command;

// Start Android Only
- (void)clearOneSignalNotifications:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)unsubscribeWhenNotificationsAreDisabled:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)removeNotification:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)removeGroupedNotifications:(CDVInvokedUrlCommand* _Nonnull)command;
// End Android Only

- (void)userProvidedPrivacyConsent:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)requiresUserPrivacyConsent:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setRequiresUserPrivacyConsent:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)provideUserConsent:(CDVInvokedUrlCommand* _Nonnull)command;

// Aliases
- (void)addAliases:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)removeAliases:(CDVInvokedUrlCommand* _Nonnull)command;

// Email
- (void)addEmail:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)removeEmail:(CDVInvokedUrlCommand* _Nonnull)command;

// SMS
- (void)addSmsNumber:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)removeSmsNumber:(CDVInvokedUrlCommand* _Nonnull)command;
    
- (void)setLaunchURLsInApp:(CDVInvokedUrlCommand* _Nonnull)command;

// In-App Messages
- (void)setClickHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setLifecycleHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setOnWillDisplayInAppMessageHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setOnDidDisplayInAppMessageHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setOnWillDismissInAppMessageHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setOnDidDismissInAppMessageHandler:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)addTriggers:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)removeTriggers:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)clearTriggers:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setPaused:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)isPaused:(CDVInvokedUrlCommand* _Nonnull)command;

// Outcomes
- (void)addOutcome:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)addUniqueOutcome:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)addOutcomeWithValue:(CDVInvokedUrlCommand* _Nonnull)command;

// Location
- (void)requestLocationPermission:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)setLocationShared:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)isLocationShared:(CDVInvokedUrlCommand* _Nonnull)command;

- (void)setLanguage:(CDVInvokedUrlCommand* _Nonnull)command;

// Live Activity
- (void)enterLiveActivity:(CDVInvokedUrlCommand* _Nonnull)command;
- (void)exitLiveActivity:(CDVInvokedUrlCommand* _Nonnull)command;

@end
