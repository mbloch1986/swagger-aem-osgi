using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Sharpility.Extensions;
using NodaTime;

namespace Org.OpenAPITools..Models
{
    /// <summary>
    /// ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo
    /// </summary>
    public sealed class ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo:  IEquatable<ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo>
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
        public ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties Properties { get; private set; }


        /// <summary>
        /// Empty constructor required by some serializers.
        /// Use ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.Builder() for instance creation instead.
        /// </summary>
        [Obsolete]
        public ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo()
        {
        }

        private ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo(string Pid, string Title, string Description, ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties Properties)
        {
            
            this.Pid = Pid;
            
            this.Title = Title;
            
            this.Description = Description;
            
            this.Properties = Properties;
            
        }

        /// <summary>
        /// Returns builder of ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.
        /// </summary>
        /// <returns>ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder</returns>
        public static ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder Builder()
        {
            return new ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder();
        }

        /// <summary>
        /// Returns ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder with properties set.
        /// Use it to change properties.
        /// </summary>
        /// <returns>ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder</returns>
        public ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder With()
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

        public bool Equals(ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo other)
        {
            return Equals((object) other);
        }

        public override int GetHashCode()
        {
            return this.PropertiesHash();
        }

        /// <summary>
        /// Implementation of == operator for (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.
        /// </summary>
        /// <param name="left">Compared (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo</param>
        /// <param name="right">Compared (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo</param>
        /// <returns>true if compared items are equals, false otherwise</returns>
        public static bool operator == (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo left, ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo right)
        {
            return Equals(left, right);
        }

        /// <summary>
        /// Implementation of != operator for (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.
        /// </summary>
        /// <param name="left">Compared (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo</param>
        /// <param name="right">Compared (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo</param>
        /// <returns>true if compared items are not equals, false otherwise</returns>
        public static bool operator != (ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo left, ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo right)
        {
            return !Equals(left, right);
        }

        /// <summary>
        /// Builder of ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.
        /// </summary>
        public sealed class ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder
        {
            private string _Pid;
            private string _Title;
            private string _Description;
            private ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties _Properties;

            internal ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder()
            {
                SetupDefaults();
            }

            private void SetupDefaults()
            {
            }

            /// <summary>
            /// Sets value for ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.Pid property.
            /// </summary>
            /// <param name="value">Pid</param>
            public ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder Pid(string value)
            {
                _Pid = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.Title property.
            /// </summary>
            /// <param name="value">Title</param>
            public ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder Title(string value)
            {
                _Title = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.Description property.
            /// </summary>
            /// <param name="value">Description</param>
            public ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder Description(string value)
            {
                _Description = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.Properties property.
            /// </summary>
            /// <param name="value">Properties</param>
            public ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfoBuilder Properties(ComDayCqWcmCoreImplPagePageInfoAggregatorImplProperties value)
            {
                _Properties = value;
                return this;
            }


            /// <summary>
            /// Builds instance of ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo.
            /// </summary>
            /// <returns>ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo</returns>
            public ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo Build()
            {
                Validate();
                return new ComDayCqWcmCoreImplPagePageInfoAggregatorImplInfo(
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