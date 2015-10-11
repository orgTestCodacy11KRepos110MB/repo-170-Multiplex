//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTWindowActivationStateObserver-Protocol.h"

@class DVTMutableOrderedDictionary, DVTObservingToken, NSColor, NSMenu, NSString;

@interface DVTAbstractColorPicker : NSView <DVTWindowActivationStateObserver, NSMenuDelegate, NSDraggingSource>
{
    NSMenu *_colorsMenu;
    id _colorValueBindingController;
    NSString *_colorValueBindingKeyPath;
    DVTObservingToken *_colorListBindingObservation;
    DVTObservingToken *_colorValueBindingObservation;
    DVTObservingToken *_supportsNilColorBindingObservation;
    id  _windowActivationObservation;
    BOOL _supportsNilColor;
    BOOL _showingMultipleValues;
    BOOL _enabled;
    BOOL _active;
    BOOL _highlighted;
    int _defaultColorMode;
    NSColor *_color;
    DVTMutableOrderedDictionary *_suggestedColors;
    NSColor *_defaultColor;
    id _target;
    SEL _action;
    unsigned long long _controlSize;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property(getter=isShowingMultipleValues) BOOL showingMultipleValues; // @synthesize showingMultipleValues=_showingMultipleValues;
@property BOOL supportsNilColor; // @synthesize supportsNilColor=_supportsNilColor;
@property(nonatomic) int defaultColorMode; // @synthesize defaultColorMode=_defaultColorMode;
@property(retain, nonatomic) NSColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain) DVTMutableOrderedDictionary *suggestedColors; // @synthesize suggestedColors=_suggestedColors;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)observedColorValueDidChangeToValue:(id)arg1;
- (void)displayColorPanel:(id)arg1;
- (void)takeDrawnColorFrom:(id)arg1;
- (void)takeDrawnColorFromPopUpMenu:(id)arg1;
- (void)sendAction;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)beginColorDragForEvent:(id)arg1;
- (id)imageForDraggedColor:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)colorPanelColorChanged:(id)arg1;
- (void)colorPanelWillClose:(id)arg1;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)colorPickerDidBecomeActive:(id)arg1;
- (void)colorChosenFromColorChooser:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)performClick:(id)arg1;
- (void)displayColorPanel;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)showColorsMenu;
- (double)minimumPopUpMenuWidth;
- (struct CGPoint)popUpMenuLocation;
- (id)effectiveSwatchFillColor;
- (void)putIntoMultipleValuesState;
- (void)populateColorsMenu;
- (double)swatchHeight;
- (id)swatchImageForColor:(id)arg1 withSize:(struct CGSize)arg2;
- (id)effectiveSwatchBorderColor;
- (id)effectiveTextColor;
- (BOOL)isShowingTitle;
- (BOOL)isShowingDefaultColor;
- (BOOL)isShowingNamedColor;
- (BOOL)supportsDefaultColor;
- (double)noColorStrokeWidth;
- (id)titleFont;
- (void)setSuggestedColorsUsingColorList:(id)arg1;
- (id)nameForColor:(id)arg1;
- (BOOL)containsColor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 colorList:(id)arg2 defaultColor:(id)arg3 defaultColorMode:(int)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

