//
//  MHQueryWindowController.h
//  MongoHub
//
//  Created by Syd on 10-4-28.
//  Copyright 2010 ThePeppersStudio.COM. All rights reserved.
//

#import "MHTabItemViewController.h"
#import "UKSyntaxColoredTextViewController.h"

@class MHResultsOutlineViewController;
@class MODCollection;
@class MHConnectionStore;

@interface MHQueryWindowController : MHTabItemViewController
{
    MODCollection                               *_collection;
    MHConnectionStore                           *_connectionStore;
    NSMutableDictionary                         *_jsonWindowControllers;
    
    IBOutlet NSTabView                          *_tabView;
    IBOutlet NSSegmentedControl                 *_segmentedControl;
    
    MHResultsOutlineViewController              *_findResultsViewController;
    IBOutlet NSOutlineView                      *_findResultsOutlineView;
    IBOutlet NSComboBox                         *_findCriteriaComboBox;
    IBOutlet NSTokenField                       *_findFieldsTextField;
    IBOutlet NSTextField                        *_findSkipTextField;
    IBOutlet NSTextField                        *_findLimitTextField;
    IBOutlet NSTextField                        *_findSortTextField;
    IBOutlet NSTextField                        *_findTotalResultsTextField;
    IBOutlet NSTextField                        *_findQueryTextField;
    IBOutlet NSProgressIndicator                *_findQueryLoaderIndicator;
    IBOutlet NSButton                           *_findRemoveButton;
    
    IBOutlet NSButton                           *_insertButton;
    IBOutlet NSTextView                         *_insertDataTextView;
    IBOutlet NSTextField                        *_insertResultsTextField;
    IBOutlet NSProgressIndicator                *_insertLoaderIndicator;
    UKSyntaxColoredTextViewController           *_syntaxColoringController;
    
    IBOutlet NSButton                           *_updateButton;
    IBOutlet NSTextField                        *_updateCriteriaTextField;
    IBOutlet NSTextField                        *_updateUpdateTextField;
    IBOutlet NSButton                           *_updateUpsetCheckBox;
    IBOutlet NSButton                           *_updateMultiCheckBox;
    IBOutlet NSTextField                        *_updateResultsTextField;
    IBOutlet NSTextField                        *_updateQueryTextField;
    IBOutlet NSProgressIndicator                *_updateQueryLoaderIndicator;
    
    IBOutlet NSButton                           *_removeButton;
    IBOutlet NSTextField                        *_removeCriteriaTextField;
    IBOutlet NSTextField                        *_removeResultsTextField;
    IBOutlet NSTextField                        *_removeQueryTextField;
    IBOutlet NSProgressIndicator                *_removeQueryLoaderIndicator;
    
    IBOutlet NSTextField                        *_indexTextField;
    MHResultsOutlineViewController              *_indexesOutlineViewController;
    IBOutlet NSOutlineView                      *_indexOutlineView;
    IBOutlet NSProgressIndicator                *_indexLoaderIndicator;
    IBOutlet NSButton                           *_indexDropButton;
    IBOutlet NSButton                           *_indexCreateButton;
    
    IBOutlet NSTextView                         *_mrMapFunctionTextView;
    IBOutlet NSTextView                         *_mrReduceFunctionTextView;
    IBOutlet NSTextField                        *_mrCriteriaTextField;
    IBOutlet NSTextField                        *_mrOutputTextField;
    IBOutlet NSProgressIndicator                *_mrLoaderIndicator;
    MHResultsOutlineViewController              *_mrOutlineViewController;
    IBOutlet NSOutlineView                      *_mrOutlineView;
}

@property (nonatomic, retain, readwrite) MODCollection *collection;
@property (nonatomic, retain, readwrite) MHConnectionStore *connectionStore;

- (IBAction)segmentedControlAction:(id)sender;

- (void)showEditWindow:(id)sender;
- (void)jsonWindowWillClose:(id)sender;
@end

@interface MHQueryWindowController (FindTab)
- (IBAction)findQuery:(id)sender;
- (IBAction)expandFindResults:(id)sender;
- (IBAction)collapseFindResults:(id)sender;
- (IBAction)removeRecord:(id)sender;
- (IBAction)findQueryComposer:(id)sender;

@end

@interface MHQueryWindowController (InsertTab)
- (IBAction)insertQuery:(id)sender;

@end

@interface MHQueryWindowController (UpdateTab)
- (IBAction)updateQuery:(id)sender;
- (IBAction)updateQueryComposer:(id)sender;

@end

@interface MHQueryWindowController (RemoveTab)
- (IBAction)removeQuery:(id)sender;
- (void)removeQueryComposer:(id)sender;

@end

@interface MHQueryWindowController (IndexTab)
- (IBAction)indexQueryAction:(id)sender;
- (IBAction)createIndexAction:(id)sender;
- (IBAction)dropIndexAction:(id)sender;

@end

@interface MHQueryWindowController (mrTab)
- (IBAction)mapReduce:(id)sender;

@end

@interface MHQueryWindowController (UKSyntaxColoredTextViewDelegate) <UKSyntaxColoredTextViewDelegate>
@end
