//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KKElementOutlet : NSObject
{
    struct KKProperty *_property;
    NSString *_keyPath;
    CDUnknownBlockType _value;
}

@property(copy, nonatomic) CDUnknownBlockType value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) struct KKProperty *property; // @synthesize property=_property;
- (void).cxx_destruct;

@end

