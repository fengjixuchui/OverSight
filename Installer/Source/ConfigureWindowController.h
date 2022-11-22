//
//  file: ConfigureWindowController.h
//  project: OverSight (config)
//  description: install/uninstall window logic (header)
//
//  created by Patrick Wardle
//  copyright (c) 2018 Objective-See. All rights reserved.
//


@import Cocoa;

@interface ConfigureWindowController : NSWindowController <NSWindowDelegate>
{
    
}

/* PROPERTIES */

//config object
@property(nonatomic, retain) Configure* configureObj;

//uninstall button
@property (weak, nonatomic) IBOutlet NSButton *uninstallButton;

//install button
@property (weak, nonatomic) IBOutlet NSButton *installButton;

//status msg
@property (weak, nonatomic) IBOutlet NSTextField *statusMsg;

//more info button
@property (weak, nonatomic) IBOutlet NSButton *moreInfoButton;

//spinner
@property (weak, nonatomic) IBOutlet NSProgressIndicator *activityIndicator;

/* SUPPORT US */

//support us view
@property (strong, nonatomic) IBOutlet NSView *supportView;

//support us
@property (weak, nonatomic) IBOutlet NSButton *supportButton;

//observer for app activation
@property(nonatomic, retain)id appActivationObserver;

/* METHODS */

//install/uninstall button handler
-(IBAction)configureButtonHandler:(id)sender;

//(more) info button handler
-(IBAction)info:(id)sender;

//configure window/buttons
-(void)configure;

//display (show) window
-(void)display;

@end
