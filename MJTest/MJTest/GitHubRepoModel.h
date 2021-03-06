//
//  GitHubRepoModel.h
//  JSONModelDemo
//
//  Created by Marin Todorov on 19/12/2012.
//  Copyright (c) 2012 Underplot ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GitHubRepoModel
@end

@interface GitHubRepoModel : NSObject

@property (strong, nonatomic) NSDate* created;
@property (strong, nonatomic) NSDate* pushed;
@property (assign, nonatomic) int watchers;
@property (copy, nonatomic) NSString* owner;
@property (assign, nonatomic) int forks;
// It is not a good idea to have a description property, because description can not be used for debugging properly anymore.
@property (copy, nonatomic) NSString* description;
@property (copy, nonatomic) NSString* language;
@property (assign, nonatomic) BOOL fork;
@property (assign, nonatomic) double size;
@property (assign, nonatomic) int followers;
@property (copy, nonatomic) NSString* name;

@end
