// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLRICHVALUE_H
#define ASPOSE_CELLS_CELLRICHVALUE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ErrorCellValueType.h"

namespace Aspose { namespace Cells {

class CellRichValue_Impl;

/// <summary>
/// Represents rich value of the cell.
/// </summary>
class CellRichValue {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CellRichValue_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CellRichValue(CellRichValue_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CellRichValue(const CellRichValue& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CellRichValue();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CellRichValue& operator=(const CellRichValue& src);
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
    /// Gets the error value type of the cell.
    /// </summary>
    ASPOSE_CELLS_API ErrorCellValueType GetErrorValue();
    /// <summary>
    /// Gets the image data of the cell.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImage();
    /// <summary>
    /// Gets the alt text associated with the image.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAltText();
    /// <summary>
    /// Gets the alt text associated with the image.
    /// </summary>
    ASPOSE_CELLS_API void SetAltText(const U16String& value);
    /// <summary>
    /// Gets the alt text associated with the image.
    /// </summary>
    ASPOSE_CELLS_API void SetAltText(const char16_t* value);
    
};

} }

#endif
