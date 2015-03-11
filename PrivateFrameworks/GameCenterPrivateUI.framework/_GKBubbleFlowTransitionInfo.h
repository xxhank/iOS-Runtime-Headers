/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKBubblePathAnimator, GKBubbleSet, UIViewController, UIViewController<GKBubbleFlowableViewController>, _GKBubbleFlowPathTransitionInfo;

@interface _GKBubbleFlowTransitionInfo : NSObject <NSCopying> {
    struct { 
        unsigned int respondsTo_bubbleAnimatorForTransitionFromViewController : 1; 
        unsigned int respondsTo_bubbleAnimatorForTransitionToViewController : 1; 
        unsigned int respondsTo_bubbleAnimatorForRotation : 1; 
        unsigned int respondsTo_finalScreenFrameInViewCoordinatesForBubbleOfType : 1; 
        unsigned int respondsTo_configureControlForBubble : 1; 
        unsigned int respondsTo_bubblesUsedForAnyTransition : 1; 
        unsigned int respondsTo_bubbleFlowAnimateInDuration : 1; 
        unsigned int respondsTo_bubbleFlowAnimateOutDuration : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeOutDuration : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeOutDelay : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeInDuration : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeInDelay : 1; 
        unsigned int respondsTo_viewWillAppearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewDidAppearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewWillDisappearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewDidDisappearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewsToAnimateInWhileAppearingWithBubbleFlow : 1; 
        unsigned int respondsTo_viewsToAnimateOutWhileDisappearingWithBubbleFlow : 1; 
        unsigned int respondsTo_willAnimateAppearingWithBubbleFlow : 1; 
        unsigned int respondsTo_willAnimateDisappearingWithBubbleFlow : 1; 
        unsigned int respondsTo_willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1; 
        unsigned int respondsTo_willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1; 
        unsigned int respondsTo_updateBubbleTextImmediatelyForTransitionFromViewController : 1; 
        unsigned int respondsTo_readyToDisappearWithBubbleFlow : 1; 
        unsigned int respondsTo_readyToAppearWithBubbleFlow : 1; 
        unsigned int respondsTo_delayDisappearingWithBubbleFlowUntil : 1; 
        unsigned int respondsTo_delayAppearingWithBubbleFlowUntil : 1; 
    struct { 
        unsigned int respondsTo_bubbleAnimatorForTransitionFromViewController : 1; 
        unsigned int respondsTo_bubbleAnimatorForTransitionToViewController : 1; 
        unsigned int respondsTo_bubbleAnimatorForRotation : 1; 
        unsigned int respondsTo_finalScreenFrameInViewCoordinatesForBubbleOfType : 1; 
        unsigned int respondsTo_configureControlForBubble : 1; 
        unsigned int respondsTo_bubblesUsedForAnyTransition : 1; 
        unsigned int respondsTo_bubbleFlowAnimateInDuration : 1; 
        unsigned int respondsTo_bubbleFlowAnimateOutDuration : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeOutDuration : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeOutDelay : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeInDuration : 1; 
        unsigned int respondsTo_bubbleFlowSubviewFadeInDelay : 1; 
        unsigned int respondsTo_viewWillAppearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewDidAppearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewWillDisappearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewDidDisappearAnimated_bubbleFlow : 1; 
        unsigned int respondsTo_viewsToAnimateInWhileAppearingWithBubbleFlow : 1; 
        unsigned int respondsTo_viewsToAnimateOutWhileDisappearingWithBubbleFlow : 1; 
        unsigned int respondsTo_willAnimateAppearingWithBubbleFlow : 1; 
        unsigned int respondsTo_willAnimateDisappearingWithBubbleFlow : 1; 
        unsigned int respondsTo_willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1; 
        unsigned int respondsTo_willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration : 1; 
        unsigned int respondsTo_updateBubbleTextImmediatelyForTransitionFromViewController : 1; 
        unsigned int respondsTo_readyToDisappearWithBubbleFlow : 1; 
        unsigned int respondsTo_readyToAppearWithBubbleFlow : 1; 
        unsigned int respondsTo_delayDisappearingWithBubbleFlowUntil : 1; 
        unsigned int respondsTo_delayAppearingWithBubbleFlowUntil : 1; 
    UIViewController *_containingViewController;
    double _crossfadeDuration;
    BOOL _disableInteractionDuringTransition;
    double _duration;
    double _fadeInDuration;
    double _fadeOutDuration;
    BOOL _fadedOutRealFromView;
    GKBubbleSet *_fromBubbles;
    } _fromFlags;
    int _fromFocusBubbleType;
    GKBubblePathAnimator *_fromPathAnimator;
    _GKBubbleFlowPathTransitionInfo *_fromPathTransitionInfo;
    UIViewController<GKBubbleFlowableViewController> *_fromVC;
    UIViewController *_fromWrapperVC;
    GKBubblePathAnimator *_onlyPathAnimator;
    _GKBubbleFlowPathTransitionInfo *_onlyPathTransitionInfo;
    double _relativeCrossfadeDuration;
    double _relativeDuration;
    double _relativeFadeInDuration;
    double _relativeFadeOutDuration;
    double _relativeStartTime;
    double _startTime;
    GKBubbleSet *_toBubbles;
    } _toFlags;
    int _toFocusBubbleType;
    GKBubblePathAnimator *_toPathAnimator;
    _GKBubbleFlowPathTransitionInfo *_toPathTransitionInfo;
    UIViewController<GKBubbleFlowableViewController> *_toVC;
    UIViewController *_toWrapperVC;
    int _transitionPhase;
    int _transitionType;
}

@property(readonly) BOOL animated;
@property(retain) UIViewController * containingViewController;
@property double crossfadeDuration;
@property BOOL disableInteractionDuringTransition;
@property double duration;
@property double fadeInDuration;
@property double fadeOutDuration;
@property BOOL fadedOutRealFromView;
@property(retain) GKBubbleSet * fromBubbles;
@property struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; } fromFlags;
@property int fromFocusBubbleType;
@property(retain) GKBubblePathAnimator * fromPathAnimator;
@property(retain) _GKBubbleFlowPathTransitionInfo * fromPathTransitionInfo;
@property(retain) UIViewController<GKBubbleFlowableViewController> * fromVC;
@property(retain) UIViewController * fromWrapperVC;
@property(readonly) BOOL hasNonFallbackPathAnimator;
@property(retain) GKBubblePathAnimator * onlyPathAnimator;
@property(retain) _GKBubbleFlowPathTransitionInfo * onlyPathTransitionInfo;
@property(readonly) UIViewController * realFromVC;
@property(readonly) UIViewController * realToVC;
@property double relativeCrossfadeDuration;
@property double relativeDuration;
@property double relativeFadeInDuration;
@property double relativeFadeOutDuration;
@property double relativeStartTime;
@property double startTime;
@property(retain) GKBubbleSet * toBubbles;
@property struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; } toFlags;
@property int toFocusBubbleType;
@property(retain) GKBubblePathAnimator * toPathAnimator;
@property(retain) _GKBubbleFlowPathTransitionInfo * toPathTransitionInfo;
@property(retain) UIViewController<GKBubbleFlowableViewController> * toVC;
@property(retain) UIViewController * toWrapperVC;
@property int transitionPhase;
@property int transitionType;

- (void)adjustDuration:(double)arg1;
- (BOOL)animated;
- (id)containingViewController;
- (id)copyForPhase:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)crossfadeDuration;
- (void)dealloc;
- (id)description;
- (BOOL)disableInteractionDuringTransition;
- (double)duration;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (BOOL)fadedOutRealFromView;
- (id)fromBubbles;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; })fromFlags;
- (int)fromFocusBubbleType;
- (id)fromPathAnimator;
- (id)fromPathTransitionInfo;
- (id)fromVC;
- (id)fromWrapperVC;
- (BOOL)hasNonFallbackPathAnimator;
- (id)init;
- (id)onlyPathAnimator;
- (id)onlyPathTransitionInfo;
- (id)realFromVC;
- (id)realToVC;
- (void)recalculateDurationsAfterAdjustment;
- (double)relativeCrossfadeDuration;
- (double)relativeDuration;
- (double)relativeFadeInDuration;
- (double)relativeFadeOutDuration;
- (double)relativeStartTime;
- (void)setContainingViewController:(id)arg1;
- (void)setCrossfadeDuration:(double)arg1;
- (void)setDisableInteractionDuringTransition:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setFadedOutRealFromView:(BOOL)arg1;
- (void)setFromBubbles:(id)arg1;
- (void)setFromFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; })arg1;
- (void)setFromFocusBubbleType:(int)arg1;
- (void)setFromPathAnimator:(id)arg1;
- (void)setFromPathTransitionInfo:(id)arg1;
- (void)setFromVC:(id)arg1;
- (void)setFromWrapperVC:(id)arg1;
- (void)setOnlyPathAnimator:(id)arg1;
- (void)setOnlyPathTransitionInfo:(id)arg1;
- (void)setRelativeCrossfadeDuration:(double)arg1;
- (void)setRelativeDuration:(double)arg1;
- (void)setRelativeFadeInDuration:(double)arg1;
- (void)setRelativeFadeOutDuration:(double)arg1;
- (void)setRelativeStartTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setToBubbles:(id)arg1;
- (void)setToFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; })arg1;
- (void)setToFocusBubbleType:(int)arg1;
- (void)setToPathAnimator:(id)arg1;
- (void)setToPathTransitionInfo:(id)arg1;
- (void)setToVC:(id)arg1;
- (void)setToWrapperVC:(id)arg1;
- (void)setTransitionPhase:(int)arg1;
- (void)setTransitionType:(int)arg1;
- (double)startTime;
- (id)toBubbles;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; })toFlags;
- (int)toFocusBubbleType;
- (id)toPathAnimator;
- (id)toPathTransitionInfo;
- (id)toVC;
- (id)toWrapperVC;
- (int)transitionPhase;
- (int)transitionType;

@end