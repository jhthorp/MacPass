//
//  MPServerSettingsController.h
//  MacPass
//
//  Created by Michael Starke on 17.06.13.
//  Copyright (c) 2013 HicknHack Software GmbH. All rights reserved.
//

#import "MPViewController.h"
#import "MPSettingsTab.h"

@interface MPIntegrationSettingsController : MPViewController <MPSettingsTab>

@property (weak) IBOutlet NSButton *enableServerCheckbutton;
@property (weak) IBOutlet NSButton *enableGlobalAutotypeCheckbutton;
@property (weak) IBOutlet NSButton *enableQuicklookCheckbutton;

@end
