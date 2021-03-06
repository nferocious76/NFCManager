//
//  NFCTagReader.h
//  Pods-NFCManager
//
//  Created by Neil Francis Hipona on 12/16/19.
//

#import <Foundation/Foundation.h>
#import "NFCReader.h"

NS_ASSUME_NONNULL_BEGIN

@interface NFCTagReader : NFCReader

- (void)writeMessage:(NFCNDEFMessage *)message toTag:(nonnull id<NFCTag>)tag connectHandler:(nonnull void(^)(NSError *_Nullable error))connectHandler writeHandler:(nonnull void(^)(NFCNDEFStatus status, NSUInteger capacity, NSError *_Nullable error))writeHandler;

@end

NS_ASSUME_NONNULL_END
