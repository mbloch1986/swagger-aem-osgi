using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Sharpility.Extensions;
using NodaTime;

namespace Org.OpenAPITools..Models
{
    /// <summary>
    /// ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo
    /// </summary>
    public sealed class ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo:  IEquatable<ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo>
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
        public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties Properties { get; private set; }

        /// <summary>
        /// BundleLocation
        /// </summary>
        public string BundleLocation { get; private set; }

        /// <summary>
        /// ServiceLocation
        /// </summary>
        public string ServiceLocation { get; private set; }


        /// <summary>
        /// Empty constructor required by some serializers.
        /// Use ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.Builder() for instance creation instead.
        /// </summary>
        [Obsolete]
        public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo()
        {
        }

        private ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo(string Pid, string Title, string Description, ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties Properties, string BundleLocation, string ServiceLocation)
        {
            
            this.Pid = Pid;
            
            this.Title = Title;
            
            this.Description = Description;
            
            this.Properties = Properties;
            
            this.BundleLocation = BundleLocation;
            
            this.ServiceLocation = ServiceLocation;
            
        }

        /// <summary>
        /// Returns builder of ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.
        /// </summary>
        /// <returns>ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder</returns>
        public static ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder Builder()
        {
            return new ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder();
        }

        /// <summary>
        /// Returns ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder with properties set.
        /// Use it to change properties.
        /// </summary>
        /// <returns>ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder</returns>
        public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder With()
        {
            return Builder()
                .Pid(Pid)
                .Title(Title)
                .Description(Description)
                .Properties(Properties)
                .BundleLocation(BundleLocation)
                .ServiceLocation(ServiceLocation);
        }

        public override string ToString()
        {
            return this.PropertiesToString();
        }

        public override bool Equals(object obj)
        {
            return this.EqualsByProperties(obj);
        }

        public bool Equals(ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo other)
        {
            return Equals((object) other);
        }

        public override int GetHashCode()
        {
            return this.PropertiesHash();
        }

        /// <summary>
        /// Implementation of == operator for (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.
        /// </summary>
        /// <param name="left">Compared (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo</param>
        /// <param name="right">Compared (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo</param>
        /// <returns>true if compared items are equals, false otherwise</returns>
        public static bool operator == (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo left, ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo right)
        {
            return Equals(left, right);
        }

        /// <summary>
        /// Implementation of != operator for (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.
        /// </summary>
        /// <param name="left">Compared (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo</param>
        /// <param name="right">Compared (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo</param>
        /// <returns>true if compared items are not equals, false otherwise</returns>
        public static bool operator != (ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo left, ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo right)
        {
            return !Equals(left, right);
        }

        /// <summary>
        /// Builder of ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.
        /// </summary>
        public sealed class ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder
        {
            private string _Pid;
            private string _Title;
            private string _Description;
            private ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties _Properties;
            private string _BundleLocation;
            private string _ServiceLocation;

            internal ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder()
            {
                SetupDefaults();
            }

            private void SetupDefaults()
            {
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.Pid property.
            /// </summary>
            /// <param name="value">Pid</param>
            public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder Pid(string value)
            {
                _Pid = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.Title property.
            /// </summary>
            /// <param name="value">Title</param>
            public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder Title(string value)
            {
                _Title = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.Description property.
            /// </summary>
            /// <param name="value">Description</param>
            public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder Description(string value)
            {
                _Description = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.Properties property.
            /// </summary>
            /// <param name="value">Properties</param>
            public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder Properties(ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties value)
            {
                _Properties = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.BundleLocation property.
            /// </summary>
            /// <param name="value">BundleLocation</param>
            public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder BundleLocation(string value)
            {
                _BundleLocation = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.ServiceLocation property.
            /// </summary>
            /// <param name="value">ServiceLocation</param>
            public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfoBuilder ServiceLocation(string value)
            {
                _ServiceLocation = value;
                return this;
            }


            /// <summary>
            /// Builds instance of ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo.
            /// </summary>
            /// <returns>ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo</returns>
            public ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo Build()
            {
                Validate();
                return new ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreInfo(
                    Pid: _Pid,
                    Title: _Title,
                    Description: _Description,
                    Properties: _Properties,
                    BundleLocation: _BundleLocation,
                    ServiceLocation: _ServiceLocation
                );
            }

            private void Validate()
            { 
            }
        }

        
    }
}