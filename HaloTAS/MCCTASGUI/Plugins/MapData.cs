﻿using System;
using System.Collections.Generic;
using System.Text;

namespace MCCTASGUI.Plugins
{
    struct Color_BGRA8
    {
        public byte B;
        public byte G;
        public byte R;
        public byte A;

        public Color_BGRA8(byte b, byte g, byte r, byte a)
        {
            B = b;
            G = g;
            R = r;
            A = a;
        }
    }

    struct Color_RGB32
    {
        public float R;
        public float G;
        public float B;

        public Color_RGB32(float r, float g, float b)
        {
            R = r;
            G = g;
            B = b;
        }
    }

    struct Color_RGBA32
    {
        public float R;
        public float G;
        public float B;
        public float A;

        public Color_RGBA32(float r, float g, float b, float a)
        {
            R = r;
            G = g;
            B = b;
            A = a;
        }
    }

    //struct Tag_ID
    //{
    //    public ushort Index;
    //    public ushort Identifier;
    //}

    //struct Tag_Reference
    //{
    //    public uint TagClass;
    //    // const char* tag_path;
    //    // public uint Unknown;
    //    public Tag_ID Tag_ID;
    //}

    //struct Tag_Reflexive
    //{
    //    public uint DataCount;
    //    // void* data_address;
    //    // uint32_t unknown;
    //}

    //struct Tag_Entry
    //{
    //    public uint TagClassPrimary;
    //    public uint TagClassSecondary;
    //    public uint TagClassTertiary;
    //    public Tag_ID Tag_ID;
    //    // const char* tag_path;
    //    // void* tag_data;
    //    // uint32_t unknown;
    //    // uint32_t unknown2;
    //}

    //struct Tag_Header
    //{
    //    // Tag_Entry* TagArray;
    //    public Tag_ID FirstTagId;
    //    public uint MapId;
    //    public uint TagCount;
    //    public uint VertexCount;
    //    public uint VertexOffset;
    //    public uint IndexCount;
    //    public uint IndexOffset;
    //    public uint ModelDataSize;
    //    public uint Footer; // "tags"
    //}

    class MapData
    {
    }
}
