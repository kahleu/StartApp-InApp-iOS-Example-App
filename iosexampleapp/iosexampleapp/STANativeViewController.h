//
//  STANativeViewController.h
//  iosexampleapp
//
//  Created by Nadav on 11/27/14.
//  Copyright (c) 2014 StartApp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StartApp/StartApp.h>

@interface STANativeViewController : UIViewController <STADelegateProtocol> {

    /* Declaration of STAStartAppNativeAd which will load and store all the ads we intend to display */
    STAStartAppNativeAd *startAppNativeAd;
    
    /* Specific details about each ad */
    STANativeAdDetails *adDetails;
}

@end
