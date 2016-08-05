//
//  VDJsonObject.h
//  objcJson
//
//  Created by Deng on 16/8/5.
//  Copyright © Deng. All rights reserved.
//

#import <Foundation/Foundation.h>


@class VDJsonObject;


@protocol VDJsonNameAsKey <NSObject>
@end


@interface VDJsonObject : NSObject

#pragma mark Constructor


#pragma mark Public Method
+ (instancetype)modelWithJsonString:(NSString *)jsonString;
+ (instancetype)modelWithJsonString:(NSString *)jsonString usingEncoding:(NSStringEncoding)encoding;

+ (instancetype)modelWithDictionary:(NSDictionary *)dictionary;

+ (NSArray *)arrayWithJsonString:(NSString *)jsonString;
+ (NSArray *)arrayWithJsonString:(NSString *)jsonString usingEncoding:(NSStringEncoding)encoding;

+ (NSArray *)arrayWithDictionaries:(NSArray *)dictionaries;

+ (NSDictionary *)jsonKeyDictionary;
+ (NSDateFormatter *)jsonDateFormatter;

- (NSDictionary *)toJsonDictionary;
- (NSString *)toJsonString;

#pragma mark Properties


#pragma mark Protected Method


#pragma mark Private Method


@end
