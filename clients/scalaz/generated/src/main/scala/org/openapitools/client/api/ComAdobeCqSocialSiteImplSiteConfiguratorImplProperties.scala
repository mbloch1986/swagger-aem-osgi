package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties._

case class ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties (
  componentsUsingTags: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialSiteImplSiteConfiguratorImplPropertiesCodecJson: CodecJson[ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties] = CodecJson.derive[ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties]
  implicit val ComAdobeCqSocialSiteImplSiteConfiguratorImplPropertiesDecoder: EntityDecoder[ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties] = jsonOf[ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties]
  implicit val ComAdobeCqSocialSiteImplSiteConfiguratorImplPropertiesEncoder: EntityEncoder[ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties] = jsonEncoderOf[ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties]
}