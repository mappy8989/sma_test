// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_OBJECTTYPE_H
#define ASPOSE_CELLS_OBJECTTYPE_H

namespace Aspose { namespace Cells {
    /// <summary>
    /// Represents the type of the object.
    /// </summary>
    enum class ObjectType {
        /// <summary>
        /// The object is empty.
        /// </summary>
        Null = 0,
        /// <summary>
        /// The object is bool type.
        /// </summary>
        Bool,
        /// <summary>
        /// The object is number type.
        /// </summary>
        Number,
        /// <summary>
        /// The object is date type.
        /// </summary>
        Date,
        /// <summary>
        /// The object is color type.
        /// </summary>
        Color,
        /// <summary>
        /// The object is string type.
        /// </summary>
        String,
        /// <summary>
        /// The object is ReferredArea type.
        /// </summary>
        ReferredArea,
        /// <summary>
        /// The object is Range type.
        /// </summary>
        Range,
        /// <summary>
        /// The object is a one-dimensional array.
        /// </summary>
        Array1D,
        /// <summary>
        /// The object is a two-dimensional array.
        /// </summary>
        Array2D,
        /// <summary>
        /// The object is an Object pointer.
        /// </summary>
        Object
    };

    /// <summary>
    /// Represents the type of the number.
    /// </summary>
    enum class NumberType {
        None = 0,
        Int8,
        UInt8,
        Int16,
        UInt16,
        Int32,
        UInt32,
        Int64,
        UInt64,
        Float,
        Double
    };

} }

#endif
