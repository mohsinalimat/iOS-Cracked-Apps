//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray;

@interface NMTestFunctionHackerViewController : UITableViewController
{
    NSArray *_allFunctionKeys;
}

@property(copy, nonatomic) NSArray *allFunctionKeys; // @synthesize allFunctionKeys=_allFunctionKeys;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)hackerDescription:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)backAction;
- (id)init;

@end

