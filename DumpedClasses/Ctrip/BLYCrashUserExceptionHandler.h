//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYCrashHandler.h"

@interface BLYCrashUserExceptionHandler : BLYCrashHandler
{
}

+ (id)sharedHandler;
- (void)reportUserException:(id)arg1;
- (void)uninstallHandler;
- (_Bool)installHandler;
- (id)init;

@end
