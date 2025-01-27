using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Sharpility.Extensions;
using NodaTime;

namespace Org.OpenAPITools..Models
{
    /// <summary>
    /// ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo
    /// </summary>
    public sealed class ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo:  IEquatable<ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo>
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
        public ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties Properties { get; private set; }


        /// <summary>
        /// Empty constructor required by some serializers.
        /// Use ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.Builder() for instance creation instead.
        /// </summary>
        [Obsolete]
        public ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo()
        {
        }

        private ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo(string Pid, string Title, string Description, ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties Properties)
        {
            
            this.Pid = Pid;
            
            this.Title = Title;
            
            this.Description = Description;
            
            this.Properties = Properties;
            
        }

        /// <summary>
        /// Returns builder of ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.
        /// </summary>
        /// <returns>ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder</returns>
        public static ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder Builder()
        {
            return new ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder();
        }

        /// <summary>
        /// Returns ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder with properties set.
        /// Use it to change properties.
        /// </summary>
        /// <returns>ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder</returns>
        public ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder With()
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

        public bool Equals(ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo other)
        {
            return Equals((object) other);
        }

        public override int GetHashCode()
        {
            return this.PropertiesHash();
        }

        /// <summary>
        /// Implementation of == operator for (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.
        /// </summary>
        /// <param name="left">Compared (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo</param>
        /// <param name="right">Compared (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo</param>
        /// <returns>true if compared items are equals, false otherwise</returns>
        public static bool operator == (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo left, ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo right)
        {
            return Equals(left, right);
        }

        /// <summary>
        /// Implementation of != operator for (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.
        /// </summary>
        /// <param name="left">Compared (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo</param>
        /// <param name="right">Compared (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo</param>
        /// <returns>true if compared items are not equals, false otherwise</returns>
        public static bool operator != (ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo left, ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo right)
        {
            return !Equals(left, right);
        }

        /// <summary>
        /// Builder of ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.
        /// </summary>
        public sealed class ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder
        {
            private string _Pid;
            private string _Title;
            private string _Description;
            private ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties _Properties;

            internal ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder()
            {
                SetupDefaults();
            }

            private void SetupDefaults()
            {
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.Pid property.
            /// </summary>
            /// <param name="value">Pid</param>
            public ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder Pid(string value)
            {
                _Pid = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.Title property.
            /// </summary>
            /// <param name="value">Title</param>
            public ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder Title(string value)
            {
                _Title = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.Description property.
            /// </summary>
            /// <param name="value">Description</param>
            public ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder Description(string value)
            {
                _Description = value;
                return this;
            }

            /// <summary>
            /// Sets value for ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.Properties property.
            /// </summary>
            /// <param name="value">Properties</param>
            public ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfoBuilder Properties(ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties value)
            {
                _Properties = value;
                return this;
            }


            /// <summary>
            /// Builds instance of ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.
            /// </summary>
            /// <returns>ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo</returns>
            public ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo Build()
            {
                Validate();
                return new ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo(
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