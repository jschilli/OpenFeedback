//
//  OpenFeedback.h
//  OpenFeedback
//
//  Created by Tyler Hall on 12/27/09.
//  Copyright 2009 Click On Tyler, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "OpenFeedbackController.h"

@interface OpenFeedback : NSObject {
	OpenFeedbackController *windowController;
}

- (IBAction)presentFeedbackPanelForSupport:(id)sender;
- (IBAction)presentFeedbackPanelForFeature:(id)sender;
- (IBAction)presentFeedbackPanelForBug:(id)sender;

@end
