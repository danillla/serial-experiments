//
//  ApsisOneAPI.h
//  ApsisOne
//
//  Created by Fedor Pudeyan on 2018-12-20.
//  Copyright © 2018 APSIS International AB. All rights reserved.
//

#import <ApsisOne/ONEScreenViewEvent.h>
#import <ApsisOne/ONELogLevel.h>

NS_ASSUME_NONNULL_BEGIN

@interface ApsisOneAPI : NSObject

/**
 *  Publish a Message
 *
 *  @param topic topic of the Message
 *  @param payload payload of the Message
 */
+ (void)publish:(NSString *)topic
        payload:(NSObject<NSCopying> *)payload;

/**
 *  Susbscribe to a Message with particular topic
 *
 *  @param topic Message's topic to subscribe to
 *  @param handler block to handle received Message
 */
+ (void)subscribe:(NSString *)topic
          handler:(void(^)(NSString *topic, NSObject<NSCopying> *payload))handler;


/**
 *  Publish collect data consent
 *
 *  @param isCollecting update collecting data state
 */
+ (void)collectDataEnabled:(BOOL)isCollecting;

/**
 *  Subscribe to event when collection data consent lost in case of Delete or Lock profile
 *
 *  @param handler block to handle consent lost
 */
+ (void)subscribeCollectDataConsentLost:(void(^)(void))handler;

/**
 *  Manually track "view appear" event
 *
 *  @param event ONEScreenViewEvent object to store and send by SDK
 */
+ (void)trackScreenViewEvent:(ONEScreenViewEvent *)event;

/**
 *
 * Sets minimum log level. (default: ONELogLevelNone)
 * Available levels: ONELogLevelNone, ONELogLevelError, ONELogLevelWarning, ONELogLevelInfo.
 * Each subsequent level contains previous log event. E.g. ONELogLevelError contains only Error log events,
 * and ONELogLevelInfo contains Error, Warnings and Info log events.
 *
 * @param logLevel ONELogLevel type
 */
+ (void)setMinimumLogLevel:(ONELogLevel)logLevel;

@end

NS_ASSUME_NONNULL_END
