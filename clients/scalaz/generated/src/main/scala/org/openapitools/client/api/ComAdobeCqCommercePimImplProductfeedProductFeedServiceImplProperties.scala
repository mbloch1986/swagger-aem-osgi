package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties._

case class ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties (
  feedGeneratorAlgorithm: Option[ConfigNodePropertyDropDown])

object ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplPropertiesCodecJson: CodecJson[ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties] = CodecJson.derive[ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties]
  implicit val ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplPropertiesDecoder: EntityDecoder[ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties] = jsonOf[ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties]
  implicit val ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplPropertiesEncoder: EntityEncoder[ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties] = jsonEncoderOf[ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties]
}