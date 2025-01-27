using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Sharpility.Extensions;
using NodaTime;

namespace Org.OpenAPITools..Models
{
    /// <summary>
    /// ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo
    /// </summary>
    public sealed class ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo:  IEquatable<ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo>
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
        public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties Properties { get; private set; }


        /// <summary>
        /// Empty constructor required by some serializers.
        /// Use ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.Builder() for instance creation instead.
        /// </summary>
        [Obsolete]
        public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo()
        {
        }

        private ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo(string Pid, string Title, string Description, ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties Properties)
        {
            
            this.Pid = Pid;
            
            this.Title = Title;
            
            this.Description = Description;
            
            this.Properties = Properties;
            
        }

        /// <summary>
        /// Returns builder of ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.
        /// </summary>
        /// <returns>ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder</returns>
        public static ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder Builder()
        {
            return new ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder();
        }

        /// <summary>
        /// Returns ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder with properties set.
        /// Use it to change properties.
        /// </summary>
        /// <returns>ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder</returns>
        public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder With()
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

        public bool Equals(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo other)
        {
            return Equals((object) other);
        }

        public override int GetHashCode()
        {
            return this.PropertiesHash();
        }

        /// <summary>
        /// Implementation of == operator for (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.
        /// </summary>
        /// <param name="left">Compared (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo</param>
        /// <param name="right">Compared (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo</param>
        /// <returns>true if compared items are equals, false otherwise</returns>
        public static bool operator == (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo left, ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo right)
        {
            return Equals(left, right);
        }

        /// <summary>
        /// Implementation of != operator for (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.
        /// </summary>
        /// <param name="left">Compared (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo</param>
        /// <param name="right">Compared (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo</param>
        /// <returns>true if compared items are not equals, false otherwise</returns>
        public static bool operator != (ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo left, ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo right)
        {
            return !Equals(left, right);
        }

        /// <summary>
        /// Builder of ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.
        /// </summary>
        public sealed class ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder
        {
            private string _Pid;
            private string _Title;
            private string _Description;
            private ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties _Properties;

            internal ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder()
            {
                SetupDefaults();
            }

            private void SetupDefaults()
            {
            }

            /// <summary>
            /// Sets value for ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.Pid property.
            /// </summary>
            /// <param name="value">Pid</param>
            public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder Pid(string value)
            {
                _Pid = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.Title property.
            /// </summary>
            /// <param name="value">Title</param>
            public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder Title(string value)
            {
                _Title = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.Description property.
            /// </summary>
            /// <param name="value">Description</param>
            public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder Description(string value)
            {
                _Description = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.Properties property.
            /// </summary>
            /// <param name="value">Properties</param>
            public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoBuilder Properties(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties value)
            {
                _Properties = value;
                return this;
            }


            /// <summary>
            /// Builds instance of ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo.
            /// </summary>
            /// <returns>ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo</returns>
            public ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo Build()
            {
                Validate();
                return new ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo(
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