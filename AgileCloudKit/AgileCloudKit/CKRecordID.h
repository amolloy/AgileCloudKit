//
//  CKRecordID.h
//  AgileCloudKit
//
//  Copyright (c) 2015 AgileBits Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CKRecordZoneID;

@interface CKRecordID : NSObject <NSSecureCoding, NSCopying>

- (instancetype)init NS_UNAVAILABLE;

/* Record names must be 255 characters or less. Most UTF-8 characters are valid. */
/* This creates a record ID in the default zone */
- (instancetype)initWithRecordName:(NSString *)recordName;
- (instancetype)initWithRecordName:(NSString *)recordName zoneID:(CKRecordZoneID *)zoneID NS_DESIGNATED_INITIALIZER;

@property(nonatomic, readonly, strong) NSString *recordName;
@property(nonatomic, readonly, strong) CKRecordZoneID *zoneID;

@end
