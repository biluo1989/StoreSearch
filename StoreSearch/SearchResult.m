//
//  SearchResult.m
//  StoreSearch
//
//  Created by APPLE on 13-8-15.
//  Copyright (c) 2013年 Yujiang. All rights reserved.
//

#import "SearchResult.h"

@implementation SearchResult

- (NSComparisonResult)compareName:(SearchResult *)other
{
    return [self.name localizedStandardCompare:other.name];
}

@end
