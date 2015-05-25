//
//  InfoMessageProtocol.h
//  geocaching
//
//  Created by Thorsten Heilmann on 30.09.12.
//
//

#import <Foundation/Foundation.h>

@protocol InfoMessageProtocol <NSObject>

- (void)showInfoMessage:(NSString *)msg forNamedView:(NSString *)name;

@end
