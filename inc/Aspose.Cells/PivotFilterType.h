// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFILTERTYPE_H
#define ASPOSE_CELLS_PIVOT_PIVOTFILTERTYPE_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Represents PivotTable Filter type.
/// </summary>
enum class PivotFilterType {
    /// <summary>
    /// Indicates the "begins with" filter for field captions.
    /// </summary>
    CaptionBeginsWith = 0,
    /// <summary>
    /// Indicates the "is between" filter for field captions.
    /// </summary>
    CaptionBetween = 1,
    /// <summary>
    /// Indicates the "contains" filter for field captions.
    /// </summary>
    CaptionContains = 2,
    /// <summary>
    /// Indicates the "ends with" filter for field captions.
    /// </summary>
    CaptionEndsWith = 3,
    /// <summary>
    /// Indicates the "equal" filter for field captions.
    /// </summary>
    CaptionEqual = 4,
    /// <summary>
    /// Indicates the "is greater than" filter for field captions.
    /// </summary>
    CaptionGreaterThan = 5,
    /// <summary>
    /// Indicates the "is greater than or equal to" filter for field captions.
    /// </summary>
    CaptionGreaterThanOrEqual = 6,
    /// <summary>
    /// Indicates the "is less than" filter for field captions.
    /// </summary>
    CaptionLessThan = 7,
    /// <summary>
    /// Indicates the "is less than or equal to" filter for field captions.
    /// </summary>
    CaptionLessThanOrEqual = 8,
    /// <summary>
    /// Indicates the "does not begin with" filter for field captions.
    /// </summary>
    CaptionNotBeginsWith = 9,
    /// <summary>
    /// Indicates the "is not between" filter for field captions.
    /// </summary>
    CaptionNotBetween = 10,
    /// <summary>
    /// Indicates the "does not contain" filter for field captions.
    /// </summary>
    CaptionNotContains = 11,
    /// <summary>
    /// Indicates the "does not end with" filter for field captions.
    /// </summary>
    CaptionNotEndsWith = 12,
    /// <summary>
    /// Indicates the "not equal" filter for field captions.
    /// </summary>
    CaptionNotEqual = 13,
    /// <summary>
    /// Indicates the "count" filter.
    /// </summary>
    Count = 14,
    /// <summary>
    /// Indicates the "between" filter for date values.
    /// </summary>
    DateBetween = 15,
    /// <summary>
    /// Indicates the "equals" filter for date values.
    /// </summary>
    DateEqual = 16,
    /// <summary>
    /// Indicates the "after" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.DateAfter"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.DateAfter instead.
    DateNewerThan [[deprecated]] = 17,
    /// <summary>
    /// Indicates the "after" filter for date values.
    /// </summary>
    DateAfter = 17,
    /// <summary>
    /// Indicates the "after or equal to" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.DateAfterOrEqual"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.DateAfterOrEqual instead.
    DateNewerThanOrEqual [[deprecated]] = 18,
    /// <summary>
    /// Indicates the "after or equal to" filter for date values.
    /// </summary>
    DateAfterOrEqual = 18,
    /// <summary>
    /// Indicates the "not between" filter for date values.
    /// </summary>
    DateNotBetween = 19,
    /// <summary>
    /// Indicates the "does not equal" filter for date values.
    /// </summary>
    DateNotEqual = 20,
    /// <summary>
    /// Indicates the "before" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.DateBefore"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.DateBefore instead.
    DateOlderThan [[deprecated]] = 21,
    /// <summary>
    /// Indicates the "before" filter for date values.
    /// </summary>
    DateBefore = 21,
    /// <summary>
    /// Indicates the "before or equal to" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.DateBeforeOrEqual"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.DateBeforeOrEqual instead.
    DateOlderThanOrEqual [[deprecated]] = 22,
    /// <summary>
    /// Indicates the "before or equal to" filter for date values.
    /// </summary>
    DateBeforeOrEqual = 22,
    /// <summary>
    /// Indicates the "last month" filter for date values.
    /// </summary>
    LastMonth = 23,
    /// <summary>
    /// Indicates the "last quarter" filter for date values.
    /// </summary>
    LastQuarter = 24,
    /// <summary>
    /// Indicates the "last week" filter for date values.
    /// </summary>
    LastWeek = 25,
    /// <summary>
    /// Indicates the "last year" filter for date values.
    /// </summary>
    LastYear = 26,
    /// <summary>
    /// Indicates the "January" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.January"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.January instead.
    M1 [[deprecated]] = 27,
    /// <summary>
    /// Indicates the "January" filter for date values.
    /// </summary>
    January = 27,
    /// <summary>
    /// Indicates the "February" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.February"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.February instead.
    M2 [[deprecated]] = 28,
    /// <summary>
    /// Indicates the "February" filter for date values.
    /// </summary>
    February = 28,
    /// <summary>
    /// Indicates the "March" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.March"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.March instead.
    M3 [[deprecated]] = 29,
    /// <summary>
    /// Indicates the "March" filter for date values.
    /// </summary>
    March = 29,
    /// <summary>
    /// Indicates the "April" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.April"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.April instead.
    M4 [[deprecated]] = 30,
    /// <summary>
    /// Indicates the "April" filter for date values.
    /// </summary>
    April = 30,
    /// <summary>
    /// Indicates the "May" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.May"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.May instead.
    M5 [[deprecated]] = 31,
    /// <summary>
    /// Indicates the "May" filter for date values.
    /// </summary>
    May = 31,
    /// <summary>
    /// Indicates the "June" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.June"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.June instead.
    M6 [[deprecated]] = 32,
    /// <summary>
    /// Indicates the "June" filter for date values.
    /// </summary>
    June = 32,
    /// <summary>
    /// Indicates the "July" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.July"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.July instead.
    M7 [[deprecated]] = 33,
    /// <summary>
    /// Indicates the "July" filter for date values.
    /// </summary>
    July = 33,
    /// <summary>
    /// Indicates the "August" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.August"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.August instead.
    M8 [[deprecated]] = 34,
    /// <summary>
    /// Indicates the "August" filter for date values.
    /// </summary>
    August = 34,
    /// <summary>
    /// Indicates the "September" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.September"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.September instead.
    M9 [[deprecated]] = 35,
    /// <summary>
    /// Indicates the "September" filter for date values.
    /// </summary>
    September = 35,
    /// <summary>
    /// Indicates the "October" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.October"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.October instead.
    M10 [[deprecated]] = 36,
    /// <summary>
    /// Indicates the "October" filter for date values.
    /// </summary>
    October = 36,
    /// <summary>
    /// Indicates the "November" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.November"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.November instead.
    M11 [[deprecated]] = 37,
    /// <summary>
    /// Indicates the "November" filter for date values.
    /// </summary>
    November = 37,
    /// <summary>
    /// Indicates the "December" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.December"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.December instead.
    M12 [[deprecated]] = 38,
    /// <summary>
    /// Indicates the "December" filter for date values.
    /// </summary>
    December = 38,
    /// <summary>
    /// Indicates the "next month" filter for date values.
    /// </summary>
    NextMonth = 39,
    /// <summary>
    /// Indicates the "next quarter" for date values.
    /// </summary>
    NextQuarter = 40,
    /// <summary>
    /// Indicates the "next week" for date values.
    /// </summary>
    NextWeek = 41,
    /// <summary>
    /// Indicates the "next year" filter for date values.
    /// </summary>
    NextYear = 42,
    /// <summary>
    /// Indicates the "percent" filter for numeric values.
    /// </summary>
    Percent = 43,
    /// <summary>
    /// Indicates the "first quarter" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.Quarter1"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.Quarter1 instead.
    Q1 [[deprecated]] = 44,
    /// <summary>
    /// Indicates the "first quarter" filter for date values.
    /// </summary>
    Quarter1 = 44,
    /// <summary>
    /// Indicates the "second quarter" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.Quarter2"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.Quarter2 instead.
    Q2 [[deprecated]] = 45,
    /// <summary>
    /// Indicates the "second quarter" filter for date values.
    /// </summary>
    Quarter2 = 45,
    /// <summary>
    /// Indicates the "third quarter" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.Quarter3"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.Quarter3 instead.
    Q3 [[deprecated]] = 46,
    /// <summary>
    /// Indicates the "third quarter" filter for date values.
    /// </summary>
    Quarter3 = 46,
    /// <summary>
    /// Indicates the "fourth quarter" filter for date values.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="PivotFilterType.Quarter4"/> property.
    /// This property will be removed 6 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterType.Quarter4 instead.
    Q4 [[deprecated]] = 47,
    /// <summary>
    /// Indicates the "fourth quarter" filter for date values.
    /// </summary>
    Quarter4 = 47,
    /// <summary>
    /// Indicates the "sum" filter for numeric values.
    /// </summary>
    Sum = 48,
    /// <summary>
    /// Indicates the "this month" filter for date values.
    /// </summary>
    ThisMonth = 49,
    /// <summary>
    /// Indicates the "this quarter" filter for date values.
    /// </summary>
    ThisQuarter = 50,
    /// <summary>
    /// Indicates the "this week" filter for date values.
    /// </summary>
    ThisWeek = 51,
    /// <summary>
    /// Indicate the "this year" filter for date values.
    /// </summary>
    ThisYear = 52,
    /// <summary>
    /// Indicates the "today" filter for date values.
    /// </summary>
    Today = 53,
    /// <summary>
    /// Indicates the "tomorrow" filter for date values.
    /// </summary>
    Tomorrow = 54,
    /// <summary>
    /// Indicates the PivotTable filter is unknown to the application.
    /// </summary>
    Unknown = 55,
    /// <summary>
    /// Indicates the "Value between" filter for text and numeric values.
    /// </summary>
    ValueBetween = 56,
    /// <summary>
    /// Indicates the "value equal" filter for text and numeric values.
    /// </summary>
    ValueEqual = 57,
    /// <summary>
    /// Indicates the "value greater than" filter for text and numeric values.
    /// </summary>
    ValueGreaterThan = 58,
    /// <summary>
    /// Indicates the "value greater than or equal to" filter for text and numeric values.
    /// </summary>
    ValueGreaterThanOrEqual = 59,
    /// <summary>
    /// Indicates the "value less than" filter for text and numeric values.
    /// </summary>
    ValueLessThan = 60,
    /// <summary>
    /// Indicates the "value less than or equal to" filter for text and numeric values.
    /// </summary>
    ValueLessThanOrEqual = 61,
    /// <summary>
    /// Indicates the "value not between" filter for text and numeric values.
    /// </summary>
    ValueNotBetween = 62,
    /// <summary>
    /// Indicates the "value not equal" filter for text and numeric values.
    /// </summary>
    ValueNotEqual = 63,
    /// <summary>
    /// Indicates the "year-to-date" filter for date values.
    /// </summary>
    YearToDate = 64,
    /// <summary>
    /// Indicates the "yesterday" filter for date values.
    /// </summary>
    Yesterday = 65,
    /// <summary>
    /// No filter.
    /// </summary>
    None = 255,
};

} } }

#endif
