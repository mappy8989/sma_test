// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTBOXOPTIONS_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTBOXOPTIONS_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/ShapeTextVerticalAlignmentType.h"
#include "Aspose.Cells/TextVerticalType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

class TextBoxOptions_Impl;

/// <summary>
/// Represents the text options of the shape
/// </summary>
class TextBoxOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextBoxOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextBoxOptions(TextBoxOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextBoxOptions(const TextBoxOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextBoxOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextBoxOptions& operator=(const TextBoxOptions& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// It corresponds to "Format Shape - Text Options - Text Box - Vertical Alignment" in Excel.
    /// </summary>
    ASPOSE_CELLS_API ShapeTextVerticalAlignmentType GetShapeTextVerticalAlignment();
    /// <summary>
    /// It corresponds to "Format Shape - Text Options - Text Box - Vertical Alignment" in Excel.
    /// </summary>
    ASPOSE_CELLS_API void SetShapeTextVerticalAlignment(ShapeTextVerticalAlignmentType value);
    /// <summary>
    /// Indicates whether to resize the shape to fit the text
    /// </summary>
    ASPOSE_CELLS_API bool GetResizeToFitText();
    /// <summary>
    /// Indicates whether to resize the shape to fit the text
    /// </summary>
    ASPOSE_CELLS_API void SetResizeToFitText(bool value);
    /// <summary>
    /// Gets or sets the text display direction within a given text body.
    /// It corresponds to "Format Shape - Text Options - Text Box - Text direction" in Excel
    /// </summary>
    ASPOSE_CELLS_API TextVerticalType GetShapeTextDirection();
    /// <summary>
    /// Gets or sets the text display direction within a given text body.
    /// It corresponds to "Format Shape - Text Options - Text Box - Text direction" in Excel
    /// </summary>
    ASPOSE_CELLS_API void SetShapeTextDirection(TextVerticalType value);
    /// <summary>
    /// Gets and sets the left margin in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftMarginPt();
    /// <summary>
    /// Gets and sets the left margin in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftMarginPt(double value);
    /// <summary>
    /// Gets and sets the right margin in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetRightMarginPt();
    /// <summary>
    /// Gets and sets the right margin in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetRightMarginPt(double value);
    /// <summary>
    /// Gets and sets the top margin in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetTopMarginPt();
    /// <summary>
    /// Gets and sets the top margin in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetTopMarginPt(double value);
    /// <summary>
    /// Returns the bottom margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API double GetBottomMarginPt();
    /// <summary>
    /// Returns the bottom margin in unit of Points
    /// </summary>
    ASPOSE_CELLS_API void SetBottomMarginPt(double value);
    /// <summary>
    /// Whether allow text to overflow shape.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowTextToOverflow();
    /// <summary>
    /// Whether allow text to overflow shape.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowTextToOverflow(bool value);
    /// <summary>
    /// Specifies text wrapping within a shape.
    /// False - No wrapping will occur on text body.
    /// True - Wrapping will occur on text body.
    /// </summary>
    ASPOSE_CELLS_API bool GetWrapTextInShape();
    /// <summary>
    /// Specifies text wrapping within a shape.
    /// False - No wrapping will occur on text body.
    /// True - Wrapping will occur on text body.
    /// </summary>
    ASPOSE_CELLS_API void SetWrapTextInShape(bool value);
    
};

} } } }

#endif
