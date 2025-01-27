package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties._

case class ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties (
  forwardRequests: Option[ConfigNodePropertyBoolean])

object ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesCodecJson: CodecJson[ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties] = CodecJson.derive[ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties]
  implicit val ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesDecoder: EntityDecoder[ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties] = jsonOf[ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties]
  implicit val ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesEncoder: EntityEncoder[ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties] = jsonEncoderOf[ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties]
}
