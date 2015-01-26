//
//  ReposModel.m
//  JSONModelDemo
//
//  Created by Marin Todorov on 19/12/2012.
//  Copyright (c) 2012 Underplot ltd. All rights reserved.
//

#import "ReposModel.h"
#import "GitHubRepoModel.h"
#import "MJExtension.h"

@implementation ReposModel
- (NSDictionary *)objectClassInArray
{
    return @{@"repositories" : [GitHubRepoModel class]};
}
@end
