using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Sharpility.Extensions;
using NodaTime;

namespace Org.OpenAPITools..Models
{
    /// <summary>
    /// ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo
    /// </summary>
    public sealed class ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo:  IEquatable<ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo>
    { 
        /// <summary>
        /// Pid
        /// </summary>
        public string Pid { get; private set; }

        /// <summary>
        /// Title
        /// </summary>
        public string Title { get; private set; }

        /// <summary>
        /// Description
        /// </summary>
        public string Description { get; private set; }

        /// <summary>
        /// Properties
        /// </summary>
        public ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties Properties { get; private set; }


        /// <summary>
        /// Empty constructor required by some serializers.
        /// Use ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.Builder() for instance creation instead.
        /// </summary>
        [Obsolete]
        public ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo()
        {
        }

        private ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo(string Pid, string Title, string Description, ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties Properties)
        {
            
            this.Pid = Pid;
            
            this.Title = Title;
            
            this.Description = Description;
            
            this.Properties = Properties;
            
        }

        /// <summary>
        /// Returns builder of ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        /// </summary>
        /// <returns>ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder</returns>
        public static ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder Builder()
        {
            return new ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder();
        }

        /// <summary>
        /// Returns ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder with properties set.
        /// Use it to change properties.
        /// </summary>
        /// <returns>ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder</returns>
        public ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder With()
        {
            return Builder()
                .Pid(Pid)
                .Title(Title)
                .Description(Description)
                .Properties(Properties);
        }

        public override string ToString()
        {
            return this.PropertiesToString();
        }

        public override bool Equals(object obj)
        {
            return this.EqualsByProperties(obj);
        }

        public bool Equals(ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo other)
        {
            return Equals((object) other);
        }

        public override int GetHashCode()
        {
            return this.PropertiesHash();
        }

        /// <summary>
        /// Implementation of == operator for (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        /// </summary>
        /// <param name="left">Compared (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo</param>
        /// <param name="right">Compared (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo</param>
        /// <returns>true if compared items are equals, false otherwise</returns>
        public static bool operator == (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo left, ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo right)
        {
            return Equals(left, right);
        }

        /// <summary>
        /// Implementation of != operator for (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        /// </summary>
        /// <param name="left">Compared (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo</param>
        /// <param name="right">Compared (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo</param>
        /// <returns>true if compared items are not equals, false otherwise</returns>
        public static bool operator != (ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo left, ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo right)
        {
            return !Equals(left, right);
        }

        /// <summary>
        /// Builder of ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        /// </summary>
        public sealed class ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder
        {
            private string _Pid;
            private string _Title;
            private string _Description;
            private ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties _Properties;

            internal ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder()
            {
                SetupDefaults();
            }

            private void SetupDefaults()
            {
            }

            /// <summary>
            /// Sets value for ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.Pid property.
            /// </summary>
            /// <param name="value">Pid</param>
            public ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder Pid(string value)
            {
                _Pid = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.Title property.
            /// </summary>
            /// <param name="value">Title</param>
            public ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder Title(string value)
            {
                _Title = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.Description property.
            /// </summary>
            /// <param name="value">Description</param>
            public ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder Description(string value)
            {
                _Description = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.Properties property.
            /// </summary>
            /// <param name="value">Properties</param>
            public ComDayCqWcmDesignimporterImplCanvasBuilderImplInfoBuilder Properties(ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties value)
            {
                _Properties = value;
                return this;
            }


            /// <summary>
            /// Builds instance of ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
            /// </summary>
            /// <returns>ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo</returns>
            public ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo Build()
            {
                Validate();
                return new ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo(
                    Pid: _Pid,
                    Title: _Title,
                    Description: _Description,
                    Properties: _Properties
                );
            }

            private void Validate()
            { 
            }
        }

        
    }
}