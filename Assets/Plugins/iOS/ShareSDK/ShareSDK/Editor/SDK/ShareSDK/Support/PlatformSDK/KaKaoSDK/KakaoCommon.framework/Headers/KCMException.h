/**
 * Copyright 2017-2018 Kakao Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

@interface KCMException : NSException

@property (readonly) NSString *domain;
@property (readonly) NSInteger code;

+ (NSException *)exceptionWithDomain:(NSString *)domain code:(NSInteger)code reason:(NSString *)reason;
+ (NSException *)exceptionWithDomain:(NSString *)domain code:(NSInteger)code reason:(NSString *)reason userInfo:(NSDictionary *)userInfo;
- (instancetype)initWithDomain:(NSString *)domain code:(NSInteger)code reason:(NSString *)reason userInfo:(NSDictionary *)userInfo NS_DESIGNATED_INITIALIZER;

+ (BOOL)tryCatchWithErrorRef:(NSError **)errorRef tryBlock:(void (^)(NSMutableDictionary *moreErrorInfo))tryBlock;

@end
