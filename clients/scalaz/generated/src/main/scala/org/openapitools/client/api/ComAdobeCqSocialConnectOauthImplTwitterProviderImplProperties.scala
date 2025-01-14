package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties._

case class ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties (
  oauthProviderId: Option[ConfigNodePropertyString],
oauthCloudConfigRoot: Option[ConfigNodePropertyString],
providerConfigRoot: Option[ConfigNodePropertyString],
providerConfigUserFolder: Option[ConfigNodePropertyDropDown],
providerConfigTwitterEnableParams: Option[ConfigNodePropertyBoolean],
providerConfigTwitterParams: Option[ConfigNodePropertyArray],
providerConfigRefreshUserdataEnabled: Option[ConfigNodePropertyBoolean])

object ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialConnectOauthImplTwitterProviderImplPropertiesCodecJson: CodecJson[ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties] = CodecJson.derive[ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties]
  implicit val ComAdobeCqSocialConnectOauthImplTwitterProviderImplPropertiesDecoder: EntityDecoder[ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties] = jsonOf[ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties]
  implicit val ComAdobeCqSocialConnectOauthImplTwitterProviderImplPropertiesEncoder: EntityEncoder[ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties] = jsonEncoderOf[ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties]
}
