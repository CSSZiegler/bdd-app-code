/*
 * Copyright (c) 2014 Mobile Academy. All rights reserved.
 */

#import <Foundation/Foundation.h>

@protocol SignInService <NSObject>

- (void)signInWithLogin:(NSString *)login password:(NSString *)password;

@end
