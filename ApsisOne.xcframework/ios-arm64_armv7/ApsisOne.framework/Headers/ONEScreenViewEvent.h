//
//  ONEScreenViewEvent.h
//  ApsisOne
//
//  Created by Daniil Alferov on 26.04.2021.
//  Copyright © 2021 APSIS International AB. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ONEScreenViewEvent : NSObject

@property (strong, nonatomic, readonly) NSString *viewName;
@property (strong, nonatomic, readonly) NSString *className;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (instancetype)eventWithViewName:(NSString *)viewName
                        className:(NSString *)className;

@end

NS_ASSUME_NONNULL_END
