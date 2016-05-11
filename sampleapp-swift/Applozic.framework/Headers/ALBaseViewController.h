//
//  ALBaseViewController.h
//  ChatApp
//
//  Created by Kumar, Sawant (US - Bengaluru) on 9/23/15.
//  Copyright (c) 2015 AppLogic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ALBaseViewController : UIViewController

@property (nonatomic, retain) UIColor *navColor;
@property (nonatomic,retain) UIView * mTableHeaderView;
@property (weak, nonatomic) IBOutlet UITableView *mTableView;
@property (strong, nonatomic) IBOutlet UITapGestureRecognizer *mTapGesture;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *mActivityIndicator;
@property (weak, nonatomic) IBOutlet UITextView *sendMessageTextView;
@property (strong, nonatomic) IBOutlet UIButton *sendButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *checkBottomConstraint;
@property (weak, nonatomic) IBOutlet UIButton *attachmentOutlet;
@property (strong, nonatomic) UILabel * label;
@property (strong, nonatomic) UILabel * typingLabel;
@property (nonatomic) BOOL  individualLaunch;
@property (weak, nonatomic) IBOutlet UIView * typingMessageView;

- (IBAction)sendAction:(id)sender;
-(void) scrollTableViewToBottomWithAnimation:(BOOL) animated;
- (IBAction)attachmentActionMethod:(id)sender;
-(UIView *)setCustomBackButton;

@end
